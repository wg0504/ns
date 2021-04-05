var express = require("express");
var router = express.Router();
var mysql = require("../public/javascripts/db");
var fs = require("fs");
var path = require("path");
var multer = require("multer");
const upload = multer({
  storage: multer.diskStorage({
    destination: function (req, file, cb) {
      cb(null, "public/gallery/");
    },
    filename: function (req, file, cb) {
      console.log("???");
      cb(null, new Date().valueOf() + path.extname(file.originalname));
    },
  }),
});

Array.prototype.last = function () {
  return this[this.length - 1];
};

router.get("/gallery_list", function (req, res, next) {
  var u_idx = "";
  if (req.query.u_idx) {
    u_idx = req.query.u_idx;
  }
  var query = "SELECT * FROM gallery ORDER BY g_date DESC LIMIT 0, 10;";
  mysql.query(query, (result, field) => {
    res.render("gallery_list", {
      gall: result,
      u_idx: u_idx,
    });
  });
});

router.get("/load_gallery", (req, res, next) => {
  var offset = (req.query.count - 1) * 10;
  var query =
    "SELECT * FROM gallery ORDER BY g_date DESC LIMIT " + offset + " , 10";
  mysql.query(query, (result, field) => {
    res.json(result);
  });
});

router.get("/gallery_view", function (req, res, next) {
  var u_idx = "";
  if (req.query.g_idx) {
    if (req.query.u_idx) {
      u_idx = req.query.u_idx;
    }
    var g_idx = req.query.g_idx;
    var query =
      "SELECT * FROM gallery AS g INNER JOIN user AS u ON g.g_uidx = u.u_idx WHERE g_idx = " +
      g_idx +
      ";";
    var query2 =
      "SELECT * FROM reply_gallery AS rg INNER JOIN user AS u ON rg.rg_uidx = u.u_idx WHERE rg_gidx = " +
      g_idx +
      " ORDER BY rg.rg_date;";
    mysql.query(query, (gall, field) => {
      mysql.query(query2, (reply, field) => {
        res.render("gallery_view", {
          gall: gall,
          reply: reply,
          u_idx: u_idx,
        });
      });
    });
  } else {
    res.redirect("gallery_list?u_idx=" + u_idx);
  }
});

router.post("/gallery_delete", function (req, res, next) {
  var u_idx = "";
  if (req.body.u_idx) {
    u_idx = req.body.u_idx;
    if (req.body.g_idx) {
      var g_idx = req.body.g_idx;
      var query = "DELETE FROM gallery WHERE g_idx=" + g_idx + ";";
      mysql.query(query, (result, field) => {
        res.redirect("gallery_list?u_idx=" + u_idx);
      });
    } else {
      res.redirect("gallery_list?u_idx=" + u_idx);
    }
  } else {
    res.redirect("gallery_list?u_idx=" + u_idx);
  }
});

router.post("/gallery_reply", function (req, res, next) {
  var r_uidx = "";
  if (req.body.u_idx) {
    if (req.body.r_gidx) {
      r_uidx = req.body.u_idx;
      var r_gidx = req.body.r_gidx;
      var r_content = req.body.r_content;
      var query =
        "INSERT INTO reply_gallery (rg_gidx, rg_uidx, rg_content, rg_date) VALUES (" +
        r_gidx +
        "," +
        r_uidx +
        ",'" +
        r_content +
        "', now());";
      mysql.query(query, (result, field) => {
        res.redirect("gallery_view?g_idx=" + r_gidx + "&u_idx=" + r_uidx);
      });
    } else {
      res.redirect("gallery_list?u_idx=" + r_uidx);
    }
  } else {
    res.redirect("gallery_list?u_idx=" + r_uidx);
  }
});

router.post("/gallery_add", async (req, res, next) => {
  try {
    const body = req.body;
    const g_uidx = body.g_uidx;
    const g_title = body.g_title;
    const g_content = body.g_content;
    const files = [];
    let fileList = req.files["fileList[]"];
    if (!Array.isArray(fileList)) fileList = [fileList];

    fileList.forEach((item, idx) => {
      const buff = new Buffer.from(item.data, "base64");
      const ext = item.name.split(".").last();
      const fileName = `${new Date().valueOf()}.${ext}`;
      const filePath = path.join(
        __dirname,
        "..",
        "public",
        "gallery",
        fileName
      );
      const fd = fs.openSync(filePath, "w");
      fs.writeSync(fd, buff, 0, buff.length, 0);
      fs.closeSync(fd);
      files.push(fileName);
    });

    const query =
      `INSERT INTO gallery (g_uidx,g_title,g_content,g_image,g_date) ` +
      `VALUES (${g_uidx}, '${g_title}', '${g_content}', '${files.toString()}', now())`;

    console.log(query);
    const result = await mysql.querySync(query);
    res.send(result);
  } catch (error) {
    console.log(error);
    res.status(503).send(error);
  }
});

router.get("/gallery_add", function (req, res, next) {
  res.render("gallery_add", {});
});

module.exports = router;
