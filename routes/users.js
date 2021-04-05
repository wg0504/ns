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
      cb(null, new Date().valueOf() + path.extname(file.originalname));
    },
  }),
});

function undefined2Null(value) {
  let _value = value.replace(/'/gi, "");

  if (_value === "undefined") {
    return null;
  } else {
    return value;
  }
}

router.post("/mypage", (req, res, next) => {
  var u_idx = req.body.u_idx;
  console.log(u_idx);
  var info = {};
  var history_arr = [];
  var history = {};
  var query =
    "SELECT A.i_name, A.i_addr, A.i_phone, A.i_url, A.i_slogan, A.i_comment, A.i_history, A.i_staff, A.u_profile, A.i_productimage, A.i_image , A.i_product , A.u_industry, B.h_date, B.h_content, B.h_place FROM user as A LEFT JOIN history as B ON B.h_uidx = A.u_idx WHERE A.u_idx = " +
    u_idx;
  mysql.query(query, (result, field) => {
    for (i in result) {
      // console.log(i)
      for (j in result[i]) {
        console.log(result[i][j]);
        if (j === "h_date" || j === "h_content" || j === "h_place") {
          if (j === "h_date") {
            if (result[i][j] !== null)
              history[j] = result[i][j].split(" ")[0].replace(/-/g, ".");
          } else {
            history[j] = result[i][j];
          }
        } else {
          if (i === "0") info[j] = result[0][j];
        }
      }
      history_arr.push(history);
      history = {};
    }
    info["i_histories"] = history_arr;
    console.log(info);
    if (
      info["u_profile"] === "" ||
      info["u_profile"] === null ||
      info["u_profile"] === undefined
    ) {
      info["u_profile"] = [];
    } else {
      info["u_profile"] = [info["u_profile"]];
    }
    if (
      info["i_productimage"] === "" ||
      info["i_productimage"] === null ||
      info["i_productimage"] === undefined
    ) {
      info["i_productimage"] = [];
    } else {
      info["i_productimage"] = info["i_productimage"].split(",");
    }
    if (
      info["i_image"] === "" ||
      info["i_image"] === null ||
      info["i_image"] === undefined
    ) {
      info["i_image"] = [];
    } else {
      info["i_image"] = info["i_image"].split(",");
    }
    // console.log(info);
    res.status(200).json(info);
  });
});

router.post("/mypage_not", (req, res, next) => {
  var u_idx = req.body.u_idx;
  var email = req.body.u_email;
  let query =
    "UPDATE user SET u_email = '" + email + "' WHERE u_idx = " + u_idx;
  mysql.query(query, (result, field) => {
    res.status(200).send(result);
  });
});

function fileRemover(arr, location) {
  var temp = [];
  // console.log(arr);
  var filePath = path.join(__dirname, "..", location);
  arr.forEach((item, idx, arr) => {
    let newName = item;
    fs.renameSync(
      filePath + "/" + item,
      filePath + "/" + item.replace("t_", "c_")
    );
    temp.push(filePath + "/" + item.replace("t_", "c_"));
    if (idx === arr.length - 1) {
      console.log("!!!!!!!!!!!!!!!!!!!!!!!!!!finish!!!!!!!!!!!!!!!!!!!!");
      var files = fs.readdirSync(filePath);
      // console.log(files)
      files.forEach((value, index, array) => {
        if (!value.includes("c_")) fs.unlinkSync(filePath + "/" + value);
        if (index === files.length - 1) {
          temp.forEach((val, ind, arra) => {
            fs.renameSync(val, val.replace("c_", "t_"));
            if (ind === temp.length - 1) {
              console.log("plase Finish");
            }
          });
        }
      });
    }
  });
}

router.post("/mypage_update", (req, res, next) => {
  try {
    var info = req.body;
    console.log(info);

    console.log(
      "////////////////////////////////////////////////////////////////////////////////"
    );
    console.log(req.files);

    let keys = null;
    if (req.files != null) {
      keys = Object.keys(req.files);
      console.log(keys);
      if (keys.indexOf("userImage") != -1) {
        let userImage = req.files["userImage"];
        let extension = userImage.name.split(".")[
          userImage.name.split(".").length - 1
        ];
        let fileName = `${info.u_idx}.${extension}`;
        info.u_profile = fileName;
        fs.writeFile(`public/profile/${fileName}`, userImage.data, () => {
          console.log("done");
        });
      }
      if (keys.indexOf("productImages[]") != -1) {
        let productImages = req.files["productImages[]"];
        if (info.i_productimage === undefined) {
          info.i_productimage = [];
        }
        if (!Array.isArray(productImages)) {
          let extension = productImages.name.split(".")[
            productImages.name.split(".").length - 1
          ];
          let fileName = `${new Date().getTime()}.${extension}`;
          info.i_productimage.push(fileName);
          fs.writeFileSync(
            `public/i_productimage/${info.u_idx}/${fileName}`,
            productImages.data
          );
        } else {
          productImages.forEach(async (productImage, index) => {
            let extension = productImage.name.split(".")[
              productImage.name.split(".").length - 1
            ];
            let fileName = `${new Date().getTime()}.${extension}`;
            info.i_productimage.push(fileName);
            fs.writeFileSync(
              `public/i_productimage/${info.u_idx}/${fileName}`,
              productImage.data
            );
          });
        }
        info.i_productimage = info.i_productimage.join();
      }
      if (keys.indexOf("industryImages[]") != -1) {
        let industryImages = req.files["industryImages[]"];
        if (info.i_image === undefined) {
          info.i_image = [];
        }
        if (!Array.isArray(industryImages)) {
          let extension = industryImages.name.split(".")[
            industryImages.name.split(".").length - 1
          ];
          let fileName = `${new Date().getTime()}.${extension}`;
          info.i_image.push(fileName);
          fs.writeFileSync(
            `public/i_image/${info.u_idx}/${fileName}`,
            industryImages.data
          );
        } else {
          industryImages.forEach(async (industryImage, index) => {
            let extension = industryImage.name.split(".")[
              industryImage.name.split(".").length - 1
            ];
            let fileName = `${new Date().getTime()}.${extension}`;
            info.i_image.push(fileName);
            fs.writeFileSync(
              `public/i_image/${info.u_idx}/${fileName}`,
              industryImage.data
            );
          });
        }
        info.i_image = info.i_image.join();
      }
    }

    let query =
      `UPDATE user SET i_name = '${info.i_name}', i_addr = '${info.i_addr}', i_phone = '${info.i_phone}', i_url = '${info.i_url}',` +
      `i_slogan = '${info.i_slogan}', i_comment = '${
        info.i_comment
      }', u_profile= ${undefined2Null("'" + info.u_profile + "'")}, i_staff = ${
        info.i_staff
      },` +
      `i_productimage = ${undefined2Null(
        "'" + info.i_productimage + "'"
      )}, i_image = ${undefined2Null("'" + info.i_image + "'")}, i_product = '${
        info.i_product
      }', i_history = ${info.i_history} ` +
      `WHERE u_idx = ${info.u_idx}`;

    // console.log(query);
    mysql.query(query, (result, field) => {
      res.status(200).send("success");
    });
  } catch (error) {
    console.log(error);
    res.status(200).send("success");
  }
});

router.post("/updateImage", (req, res, next) => {
  console.log(req.files);
  res.status(200).send("success");

  // var info = req.body;
  // var FileName = info.u_profile;
  // for (var i in info) {
  //     if (info[i] == null)
  //         info[i] == '';
  // }

  // // console.log( info.i_productimage);
  // var i_productimage = info['i_productimage'].join();
  // var i_image = info['i_image'].join();

  // var profilePath = path.join(__dirname, '..', 'public/profile');
  // var profileFiles = fs.readdirSync(profilePath);
  // profileFiles.forEach((item, idx, arr) => {
  //     if (item.includes("t_" + info.u_idx + "_"))
  //         if (!item.includes(info.u_profile[0]))
  //             fs.unlinkSync(profilePath + "/" + item);
  // })

  // // fileRemover(info.i_productimage, 'public/i_productimage/' + info.u_idx);
  // // fileRemover(info.i_image, 'public/i_image/' + info.u_idx);
  // // consol

  // var query = "UPDATE user SET i_name = '" + info.i_name + "', i_addr = '" + info.i_addr + "', i_phone = '" + info.i_phone + "', i_url = '" + info.i_url + "', " +
  //     "i_slogan = '" + info.i_slogan + "', i_comment = '" + info.i_comment + "', u_profile= '" + FileName + "', i_staff = '" + info.i_staff + "', i_productimage = '" + i_productimage +
  //     "', i_image = '" + i_image + "', i_product = '" + info.i_product + "', i_history = '" + info.i_history + "' WHERE u_idx = " + info.u_idx;
  // console.log(query)
  // mysql.query(query, (result, field) => {
  //     res.status(200).send('success');
  // })
});

// router.post("/gallery_add", async (req, res) => {
// try {
// console.log(req.body);

// var buffer_array = [];
// var files = [];

// for (i in req.files) {
//   console.log(req.files[i]);
// }
//  buffer_array.push(req.files[i]);

// var query = `INSERT INTO gallery (g_uidx,g_title,g_content,g_image,g_date) VALUES (${
//   req.body.g_uidx
// },'${req.body.g_title}','${
//   req.body.g_content
// }','${files.toString()}', now())`;

// Promise.all();
//   res.send(200);
// } catch (error) {
//   console.log("error");
//   res.status(500).send(error);
// }

// buffer_array.forEach((item, idx) => {
//     var buff = new Buffer.from(item.data, 'base64');
//     var fileName = new Date().valueOf() + req.body['fileformat[' + idx + ']']
//     files.push(fileName);
//     var filePath = path.join(__dirname, "..", "public", "gallery", fileName);
//     var fd = fs.openSync(filePath, 'w');
//     fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
//         if (error) {
//             throw err;
//         }
//         if (idx === buffer_array.length - 1) {
// var query = "INSERT INTO gallery (g_uidx,g_title,g_content,g_image,g_date) VALUES (" +
//     req.body.g_uidx + ",'" + req.body.g_title + "','" + req.body.g_content + "','" + files.toString() + "', now())";
//             mysql.query(query, (result, field) => {
//                 console.log(result, field);
//                 res.status(200).send(result);
//             })
//         }
//     });
// });
// });

router.post("/crop", (req, res, next) => {
  console.log("Crop");
  var u_idx = req.body.u_idx;
  var buffer_array = [];
  for (i in req.files) buffer_array.push(req.files[i]);
  buffer_array.forEach((item, idx) => {
    var buff = new Buffer.from(item.data, "base64");
    var imagesrc = new Date().valueOf() + item.mimetype;
    console.log(imagesrc);
    var filePath = path.join(
      __dirname,
      "..",
      "public",
      "profile",
      "p_" + imagesrc
    );
    var fd = fs.openSync(filePath, "w");
    fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
      if (error) {
        throw err;
      }
      res.status(200).send(imagesrc);
    });
  });
});

router.get("/crop", function (req, res, next) {
  var imagesrc = "";
  var u_idx = "";
  if (req.query.u_idx) {
    u_idx = req.query.u_idx;
    if (req.query.imagesrc) {
      imagesrc = req.query.imagesrc;
      res.render("crop", {
        imagesrc: imagesrc,
        u_idx: u_idx,
      });
    } else {
      res.status(400).send('"imagesrc" not found.');
    }
  } else {
    res.status(400).send('"u_idx" not found.');
  }
});

router.post("/save_crop", function (req, res, next) {
  var u_idx = req.body.u_idx;
  var imagesrc =
    path.join(__dirname, "..", "public/profile") + "/p_" + req.query.fileName;
  var FileName = "t_" + u_idx + "_" + req.query.fileName;
  var s = Number(req.body.s);
  var x = Math.floor(Number(req.body.x) * s);
  var y = Math.floor(Number(req.body.y) * s);
  var w = Math.floor(Number(req.body.w) * s);
  var h = Math.floor(Number(req.body.h) * s);
  var outputImage =
    path.join(__dirname, "..", "public/profile") + "/" + FileName;
  var sharp = require("sharp");
  sharp(imagesrc)
    .extract({
      width: w,
      height: h,
      left: x,
      top: y,
    })
    .toFile(outputImage)
    .then(function (new_img) {
      fs.unlinkSync(imagesrc);
      console.log("Image cropped and saved");
      new_img.x = x;
      new_img.y = y;
      res.status(200).send();
    })
    .catch(function (err) {
      // console.log('error');
      console.log(err);
    });
});

router.post("/product_add", function (req, res) {
  console.log(req.body);

  if (
    !fs.existsSync(
      path.join(__dirname, "..", "public", "i_productimage", req.body.u_idx)
    )
  ) {
    fs.mkdirSync(
      path.join(__dirname, "..", "public", "i_productimage", req.body.u_idx)
    );
  }
  var buffer_array = [];
  var files = [];
  for (i in req.files) buffer_array.push(req.files[i]);
  buffer_array.forEach((item, idx) => {
    var buff = new Buffer.from(item.data, "base64");
    var fileName =
      "t_" +
      req.body.u_idx +
      "_" +
      new Date().valueOf() +
      req.body["fileformat[" + idx + "]"];
    files.push(fileName);
    var filePath = path.join(
      __dirname,
      "..",
      "public",
      "i_productimage",
      req.body.u_idx,
      fileName
    );
    var fd = fs.openSync(filePath, "w");
    fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
      if (error) {
        throw err;
      }
      res.status(200).send(fileName);
    });
  });
});

router.post("/image_add", function (req, res) {
  console.log(req.body);

  if (
    !fs.existsSync(
      path.join(__dirname, "..", "public", "i_image", req.body.u_idx)
    )
  ) {
    fs.mkdirSync(
      path.join(__dirname, "..", "public", "i_image", req.body.u_idx)
    );
  }
  var buffer_array = [];
  var files = [];
  for (i in req.files) buffer_array.push(req.files[i]);
  buffer_array.forEach((item, idx) => {
    var buff = new Buffer.from(item.data, "base64");
    var fileName =
      "t_" +
      req.body.u_idx +
      "_" +
      new Date().valueOf() +
      req.body["fileformat[" + idx + "]"];
    files.push(fileName);
    var filePath = path.join(
      __dirname,
      "..",
      "public",
      "i_image",
      req.body.u_idx,
      fileName
    );
    var fd = fs.openSync(filePath, "w");
    fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
      if (error) {
        throw err;
      }
      res.status(200).send(fileName);
    });
  });
});

router.post("/his_add", (req, res, next) => {
  var h_uidx = req.body["h_uidx"];
  var h_date = req.body["h_date"];
  var h_content = req.body["h_content"];
  var h_place = req.body["h_place"];

  var query =
    "INSERT INTO history (h_uidx, h_date, h_content, h_place) VALUES (" +
    h_uidx +
    "," +
    h_date +
    " , '" +
    h_content +
    "','" +
    h_place +
    "');";
  console.log(query);
  mysql.query(query, (result, filed, error) => {
    if (error) res.status(404).send("error");
    else res.status(200).send(result);
  });
});

router.get("/test2", (req, res, next) => {
  var filePath = path.join(__dirname, "..", "public/i_productimage");
  var files = fs.readdirSync(filePath);
  files.forEach((item, idx, arr) => {
    // if (item.includes("t_"))
    fs.unlinkSync(filePath + "/" + item);
  });
  console.log(files);
  fs.mkdirSync("/public/i_image/1");
});

router.post("/support_add", (req, res, next) => {
  console.log(req.body);
  var buffer_array = [];
  var files = [];
  for (i in req.files) buffer_array.push(req.files[i]);

  if (buffer_array.length > 0)
    buffer_array.forEach((item, idx) => {
      var buff = new Buffer.from(item.data, "base64");
      var fileName = new Date().valueOf() + req.body["fileformat[" + idx + "]"];
      files.push(fileName);
      var filePath = path.join(__dirname, "..", "public", "supportF", fileName);
      var fd = fs.openSync(filePath, "w");
      fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
        if (error) {
          throw err;
        }
        if (idx === buffer_array.length - 1) {
          var query =
            "INSERT INTO support (s_uidx, s_title, s_content,  s_file, s_date) VALUES (" +
            req.body.g_uidx +
            ",'" +
            req.body.g_title +
            "','" +
            req.body.g_content +
            "','" +
            files.toString() +
            "', now())";

          mysql.query(query, (result, field) => {
            console.log(result, field);
            res.status(200).send(result);
          });
        }
      });
    });
  else {
    var query =
      "INSERT INTO support (s_uidx, s_title, s_content, s_date) VALUES (" +
      req.body.g_uidx +
      ",'" +
      req.body.g_title +
      "','" +
      req.body.g_content +
      "', now())";

    mysql.query(query, (result, field) => {
      console.log(result, field);
      res.status(200).send(result);
    });
  }
});
module.exports = router;
