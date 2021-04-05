var express = require('express');
var router = express.Router();
var mysql = require('../public/javascripts/db');
var fs = require('fs');
var path = require('path');
var multer = require('multer');
const upload = multer({
    storage: multer.diskStorage({
        destination: function (req, file, cb) {
            cb(null, 'public/notice/');
        },
        filename: function (req, file, cb) {
            cb(null, new Date().valueOf() + path.extname(file.originalname));
        }
    })
});

// router.get('/notice', function (req, res, next) {
//     var query = "SELECT * FROM notice ORDER BY n_idx ASC LIMIT 0, 10;";
//     mysql.query(query, (notice, field) => {
//         res.render('notice', {
//             notice: notice
//         });
//     });
// });

router.get('/event', function (req, res, next) {
    var u_idx = "";
    if (req.query.u_idx) {
        u_idx = req.query.u_idx;
    }
    var query = "SELECT * FROM event;";
    mysql.query(query, (event, field) => {
        for (var i = 0; i < event.length; i++) {
            var s = event[i].e_start;
            var e = event[i].e_end;
            event[i].e_start = "" + s.slice(0, 4) + s.slice(5, 7) + s.slice(8, 10);
            event[i].e_end = "" + e.slice(0, 4) + e.slice(5, 7) + e.slice(8, 10);
            if (i == (event.length - 1)) {
                res.render('event', {
                    event: event,
                    u_idx: u_idx
                });
            }
        }
    });
});

router.get('/event_delete', function (req, res, next) {
    var u_idx = "";
    if (req.query.u_idx) {
        u_idx = req.query.u_idx;
        if (req.query.e_idx) {
            var e_idx = req.query.e_idx;
            var query = "DELETE FROM event WHERE e_idx = " + e_idx + ";";
            mysql.query(query, (result, field) => {
                res.redirect('event?u_idx=' + u_idx);
            });
        } else {
            res.redirect('event?u_idx=' + u_idx);
        }
    } else {
        res.redirect('event?u_idx=' + u_idx);
    }
});

router.get('/event_add', function (req, res, next) {
    var u_idx = "";
    if (req.query.u_idx) {
        u_idx = req.query.u_idx;
    }
    res.render('event_add', {
        u_idx: u_idx
    });
});

router.post('/event_add', function (req, res, next) {
    var u_idx = "";
    if (req.body.u_idx == '1') {
        u_idx = req.body.u_idx;
        var e_start = req.body.e_start;
        var e_end = req.body.e_end;
        var e_content = req.body.e_content;
        var query = "INSERT INTO event (e_start, e_end, e_content) VALUES ('" + e_start + "','" + e_end + "','" + e_content + "');";
        mysql.query(query, (result, field) => {
            res.redirect('event?u_idx=' + u_idx);
        });
    } else {
        res.redirect('event?u_idx=' + u_idx);
    }
});

router.get('/calendar', function (req, res, next) {
    res.render('calendar', {});
});

module.exports = router;