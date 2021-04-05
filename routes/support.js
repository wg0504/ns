var express = require('express');
var router = express.Router();
var mysql = require('../public/javascripts/db');
var fs = require('fs');
var path = require('path');
var multer = require('multer');
const upload = multer({
    storage: multer.diskStorage({
        destination: function (req, file, cb) {
            cb(null, 'public/support/');
        },
        filename: function (req, file, cb) {
            cb(null, new Date().valueOf() + path.extname(file.originalname));
        }
    })
});

router.get('/support', function (req, res, next) {
    var u_idx = "";
    var more = "1";
    if (req.query.u_idx) {
        u_idx = req.query.u_idx;
        var query = "SELECT * FROM support ORDER BY s_date DESC LIMIT 0, 10";
        var query2 = "SELECT u_grade FROM user WHERE u_idx = " + u_idx + ";";
        mysql.query(query, (support, field) => {
            mysql.query(query2, (user, field) => {
                res.render('support', {
                    support: support,
                    user: user,
                    u_idx: u_idx,
                    more: more
                });
            });
        });
    } else {
        var query = "SELECT * FROM support ORDER BY s_date DESC LIMIT 0, 10";
        mysql.query(query, (support, field) => {
            res.render('support', {
                support: support,
                u_idx: u_idx,
                more: more
            });
        });
    }
});

router.get('/load_support', (req, res, next) => {
    var offset = (req.query.count - 1) * 10;
    var query = 'SELECT * FROM support ORDER BY s_date DESC LIMIT ' + offset + ' , 10';
    mysql.query(query, (result, field) => {
        res.json(result);
    });
});

router.get('/support_detail', function (req, res, next) {
    var u_idx = "";
    if (req.query.s_idx) {
        if (req.query.u_idx) {
            u_idx = req.query.u_idx;
        }
        var s_idx = req.query.s_idx;
        var query = "SELECT * FROM support AS n INNER JOIN user AS u ON n.s_uidx = u.u_idx WHERE s_idx = " + s_idx + ";";
        var query2 = "SELECT * FROM reply_support AS rs INNER JOIN user AS u ON rs.rs_uidx = u.u_idx WHERE rs_sidx = " + s_idx + ";";
        mysql.query(query, (support, field) => {
            mysql.query(query2, (reply, field) => {
                res.render('support_detail', {
                    support: support,
                    reply: reply,
                    u_idx: u_idx
                });
            });
        });
    } else {
        res.redirect('support?u_idx=' + u_idx);
    }
});

router.post('/support_delete', function (req, res, next) {
    var u_idx = "";
    if (req.body.u_idx) {
        u_idx = req.body.u_idx;
        if (req.body.s_idx) {
            var s_idx = req.body.s_idx;
            var query = "DELETE FROM support WHERE s_idx=" + s_idx + ";";
            mysql.query(query, (result, field) => {
                res.redirect('support?u_idx=' + u_idx);
            });
        } else {
            res.redirect('support?u_idx=' + u_idx);
        }
    } else {
        res.redirect('support?u_idx=' + u_idx);
    }
});

router.post('/support_reply', function (req, res, next) {
    var r_uidx = "";
    if (req.body.u_idx) {
        if (req.body.r_sidx) {
            r_uidx = req.body.u_idx;
            var r_sidx = req.body.r_sidx;
            var r_content = req.body.r_content;
            var query = "INSERT INTO reply_support (rs_sidx, rs_uidx, rs_content, rs_date) VALUES (" + r_sidx + "," + r_uidx + ",'" + r_content + "', now());";
            mysql.query(query, (result, field) => {
                res.redirect('support_detail?s_idx=' + r_sidx + '&u_idx=' + r_uidx);
            });
        } else {
            res.redirect('support?u_idx=' + r_uidx);
        }
    } else {
        res.redirect('support?u_idx=' + r_uidx);
    }
});

router.get('/support_search', function (req, res, next) {
    var u_idx = "";
    var more = "0";
    if (req.query.u_idx) {
        u_idx = req.query.u_idx;
    }
    var si = req.query.si;
    var sm = req.query.sm;
    if (sm == '1') {
        var query = "SELECT * FROM support WHERE s_title LIKE '%" + si + "%' OR s_content LIKE '%" + si + "%';";
        mysql.query(query, (support, field) => {
            res.render('support', {
                support: support,
                u_idx: u_idx,
                more: more
            });
        });
    } else if (sm == '2') {
        var query = "SELECT * FROM support WHERE s_title LIKE '%" + si + "%';";
        mysql.query(query, (support, field) => {
            res.render('support', {
                support: support,
                u_idx: u_idx,
                more: more
            });
        });
    } else if (sm == '3') {
        var query = "SELECT * FROM support WHERE s_content LIKE '%" + si + "%';";
        mysql.query(query, (support, field) => {
            res.render('support', {
                support: support,
                u_idx: u_idx,
                more: more
            });
        });
    } else {
        res.redirect('support?u_idx=' + u_idx);
    }
});


// router.post('/support_add', upload.array('images', 10), function (req, res, next) {
//     // var g_uidx = req.query.u_idx;
//     var g_uidx = 1;
//     var g_title = req.body.title;
//     var g_content = req.body.content;
//     var g_image = "";
//     for (var i = 0; i < req.files.length; i++) {
//         g_image += req.files[i].filename + ",";
//     }
//     g_image = g_image.substr(0, (g_image.length - 1));
//     var query = "INSERT INTO gallery (g_uidx, g_title, g_content, g_image, g_date) VALUES (" +
//         g_uidx + ",'" + g_title + "','" + g_content + "','" + g_image + "', now());";
//     mysql.query(query, (result, field) => {
//         res.redirect('gallery_list');
//     });
// });

module.exports = router;