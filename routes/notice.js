var express = require('express');
var router = express.Router();
var mysql = require('../public/javascripts/db');
var fs = require('fs');
var path = require('path');
var multer = require('multer');

router.get('/notice', function (req, res, next) {
    var u_idx = "";
    var more = "1";
    if (req.query.u_idx) {
        u_idx = req.query.u_idx;
        var query = "SELECT * FROM notice ORDER BY n_date DESC LIMIT 0, 10";
        var query2 = "SELECT u_grade FROM user WHERE u_idx = " + u_idx + ";";
        mysql.query(query, (notice, field) => {
            mysql.query(query2, (user, field) => {
                res.render('notice', {
                    notice: notice,
                    user: user,
                    u_idx: u_idx,
                    more: more
                });
            });
        });
    } else {
        var query = "SELECT * FROM notice ORDER BY n_date DESC LIMIT 0, 10";
        mysql.query(query, (notice, field) => {
            res.render('notice', {
                notice: notice,
                u_idx: u_idx,
                more: more
            });
        });
    }
});

router.get('/load_notice', (req, res, next) => {
    var offset = (req.query.count - 1) * 10;
    var query = 'SELECT * FROM notice ORDER BY n_date DESC LIMIT ' + offset + ' , 10';
    mysql.query(query, (result, field) => {
        res.json(result);
    });
});

router.get('/notice_detail', function (req, res, next) {
    var u_idx = "";
    if (req.query.n_idx) {
        if (req.query.u_idx) {
            u_idx = req.query.u_idx;
        }
        var n_idx = req.query.n_idx;
        var query = "SELECT * FROM notice AS n INNER JOIN user AS u ON n.n_uidx = u.u_idx WHERE n_idx = " + n_idx + ";";
        var query2 = "SELECT * FROM reply_notice AS rn INNER JOIN user AS u ON rn.rn_uidx = u.u_idx WHERE rn_nidx = " + n_idx + ";";
        mysql.query(query, (notice, field) => {
            mysql.query(query2, (reply, field) => {
                res.render('notice_detail', {
                    notice: notice,
                    reply: reply,
                    u_idx: u_idx
                });
            });
        });
    } else {
        res.redirect('notice?u_idx=' + u_idx);
    }
});

router.post('/notice_delete', function (req, res, next) {
    var u_idx = "";
    if (req.body.u_idx) {
        u_idx = req.body.u_idx;
        if (req.body.n_idx) {
            var n_idx = req.body.n_idx;
            var query = "DELETE FROM notice WHERE n_idx=" + n_idx + ";";
            mysql.query(query, (result, field) => {
                res.redirect('notice?u_idx=' + u_idx);
            });
        } else {
            res.redirect('notice?u_idx=' + u_idx);
        }
    } else {
        res.redirect('notice?u_idx=' + u_idx);
    }
});

router.post('/notice_reply', function (req, res, next) {
    var r_uidx = "";
    if (req.body.u_idx) {
        if (req.body.r_nidx) {
            r_uidx = req.body.u_idx;
            var r_nidx = req.body.r_nidx;
            var r_content = req.body.r_content;
            var query = "INSERT INTO reply_notice (rn_nidx, rn_uidx, rn_content, rn_date) VALUES (" + r_nidx + "," + r_uidx + ",'" + r_content + "', now());";
            mysql.query(query, (result, field) => {
                res.redirect('notice_detail?n_idx=' + r_nidx + '&u_idx=' + r_uidx);
            });
        } else {
            res.redirect('notice?u_idx=' + r_uidx);
        }
    } else {
        res.redirect('notice?u_idx=' + r_uidx);
    }
});

router.get('/notice_search', function (req, res, next) {
    var u_idx = "";
    var more = "0";
    if (req.query.u_idx) {
        u_idx = req.query.u_idx;
    }
    var si = req.query.si;
    var sm = req.query.sm;
    if (sm == '1') {
        var query = "SELECT * FROM notice WHERE n_title LIKE '%" + si + "%' OR n_content LIKE '%" + si + "%';";
        mysql.query(query, (notice, field) => {
            res.render('notice', {
                notice: notice,
                u_idx: u_idx,
                more: more
            });
        });
    } else if (sm == '2') {
        var query = "SELECT * FROM notice WHERE n_title LIKE '%" + si + "%';";
        mysql.query(query, (notice, field) => {
            res.render('notice', {
                notice: notice,
                u_idx: u_idx,
                more: more
            });
        });
    } else if (sm == '3') {
        var query = "SELECT * FROM notice WHERE n_content LIKE '%" + si + "%';";
        mysql.query(query, (notice, field) => {
            res.render('notice', {
                notice: notice,
                u_idx: u_idx,
                more: more
            });
        });
    } else {
        res.redirect('notice?u_idx=' + u_idx);
    }
});


// router.post('/notice_add', upload.array('images', 10), function (req, res, next) {
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