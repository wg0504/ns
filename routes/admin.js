var express = require('express');
var router = express.Router();
var mysql = require('../public/javascripts/db');
var fs = require('fs');
var path = require('path');
var multer = require('multer');
const FCM = require('fcm-node');
const fcm = new FCM("AAAABLN1jo8:APA91bHJWha_5Pw_khdNGHeqcooCFQT3JOWTnq98tKf3W3A-JldcqWmQwObLgFIlnS59tKDiZ1A0k1dugTOvNXHwUUEXdKdzgvU1IANVCanz0nnGKYhI7MORLGuUTKBvVzU7aPkHU_xf");

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

router.get('/admin', function (req, res, next) {
    res.render('admin_login', {});
});

router.post('/admin_login', function (req, res, next) {
    var id, pw = "";
    if (req.body.id) {
        id = req.body.id;
    }
    if (req.body.pw) {
        pw = req.body.pw;
    }
    var query = "SELECT * FROM user WHERE u_id = '" + id + "';";
    console.log(query);
    mysql.query(query, (result, field) => {
        if (result[0].u_pw == pw) {
            if (result[0].u_grade == '99') {
                res.cookie('u_grade', '99', {
                    expires: new Date(Date.now() + 7200000)
                });
                res.redirect('admin_u');
            } else {
                res.redirect('admin');
            }
        } else {
            res.redirect('admin');
        }
    });
});

//==================================================================== 관리자 협의회소개
router.get('/admin_i', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM user WHERE u_grade = '99';";
        mysql.query(query, (user, field) => {
            res.render('admin_i', {
                user: user
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_i_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM user WHERE u_grade = '99';";
        mysql.query(query, (user, field) => {
            res.render('admin_i_m', {
                user: user
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.post('/admin_i_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var i_addr, i_phone, i_url, i_comment, i_slogan = "";
        var u_idx = req.body.u_idx;
        if (req.body.i_addr) {
            i_addr = req.body.i_addr;
        }
        if (req.body.i_phone) {
            i_phone = req.body.i_phone;
        }
        if (req.body.i_url) {
            i_url = req.body.i_url;
        }
        if (req.body.i_comment) {
            i_comment = req.body.i_comment;
        }
        if (req.body.i_slogan) {
            i_slogan = req.body.i_slogan;
        }
        var query = "UPDATE user SET i_addr='" + i_addr + "', i_phone='" + i_phone + "', i_url='" + i_url + "', i_comment='" + i_comment + "', i_slogan='" + i_slogan + "' WHERE u_idx=" + u_idx + ";";
        mysql.query(query, (user, field) => {
            res.redirect('admin_i');
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_i_p', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM user WHERE u_grade = '99';";
        mysql.query(query, (user, field) => {
            res.render('admin_i_p', {
                user: user
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.post('/admin_i_p', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        if (req.files) {
            var buffer_array = [];
            buffer_array.push(req.files.i_file);
            buffer_array.forEach((item, idx) => {
                var buff = new Buffer.from(item.data, 'base64');
                var fileName = "intro_image" + path.extname(item.name);
                var filePath = path.join(__dirname, "..", "public", "images", fileName);
                var fd = fs.openSync(filePath, 'w');
                fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
                    if (error) {
                        console.log('err');
                        throw err;
                    }
                    if (idx === buffer_array.length - 1) {
                        var query = "UPDATE user SET i_image='" + fileName + "' WHERE u_idx=1;";
                        console.log(query);
                        mysql.query(query, (result, field) => {
                            console.log('intro_image update');
                            res.redirect('admin_i_p');
                        });
                    }
                });
            });
        } else {
            res.redirect('admin_i');
        }
    } else {
        res.redirect('admin');
    }
});

//==================================================================== 관리자 갤러리
router.get('/admin_g', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM gallery ORDER BY g_date DESC;";
        mysql.query(query, (gall, field) => {
            res.render('admin_g', {
                gall: gall
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_g_d', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var idx = req.query.idx;
        var query = "DELETE FROM gallery where g_idx in (" + idx + ")";
        mysql.query(query, (result, field) => {
            res.redirect('admin_g');
        });
    } else {
        res.redirect('admin');
    }
});


//==================================================================== 관리자 공지사항
router.get('/admin_n', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM notice ORDER BY n_date DESC";
        mysql.query(query, (notice, field) => {
            res.render('admin_n', {
                notice: notice
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_n_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var n_idx = req.query.n_idx;
        var query = "SELECT * FROM notice WHERE n_idx=" + n_idx;
        mysql.query(query, (notice, field) => {
            res.render('admin_n_m', {
                notice: notice
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.post('/admin_n_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var n_idx = req.body.n_idx;
        var n_title = req.body.n_title;
        var n_content = req.body.n_content;
        if (req.files) {
            var buffer_array = [];
            var files = [];
            for (i in req.files.n_file) {
                buffer_array.push(req.files.n_file[i]);
            }
            buffer_array.forEach((item, idx) => {
                var buff = new Buffer.from(item.data, 'base64');
                var fileName = item.name.replace("/", "");
                files.push(fileName);
                var filePath = path.join(__dirname, "..", "public", "noticeF", fileName);
                var fd = fs.openSync(filePath, 'w');
                fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
                    if (error) {
                        console.log('err');
                        throw err;
                    }
                    if (idx === buffer_array.length - 1) {
                        var n_file = files.toString();
                        var query = "UPDATE notice SET n_title='" + n_title + "', n_content='" + n_content + "', n_file='" + n_file + "', n_date=now() WHERE n_idx=" + n_idx + ";";
                        mysql.query(query, (result, field) => {
                            res.redirect('admin_n');
                        });
                    }
                });
            });
        } else {
            var n_file = "";
            var query = "UPDATE notice SET n_title='" + n_title + "', n_content='" + n_content + "', n_date=now() WHERE n_idx=" + n_idx + ";";
            mysql.query(query, (result, field) => {
                res.redirect('admin_n');
            });
        }
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_n_d', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var n_idx = req.query.n_idx;
        var query = "DELETE FROM notice WHERE n_idx=" + n_idx;
        mysql.query(query, (result, field) => {
            res.redirect('admin_n');
        })
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_n_a', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        res.render('admin_n_a');
    } else {
        res.redirect('admin');
    }
});

router.post('/admin_n_a', function (req, res, next) {
    var body = "공지사항에 새로운 글이 작성되었습니다.";
    if (req.cookies.u_grade == '99') {
        var n_title = req.body.n_title;
        var n_content = req.body.n_content;
        // console.log(req.files);
        if (req.files) {
            var buffer_array = [];
            var files = [];
            if (Array.isArray(req.files.n_file)) {
                for (i in req.files.n_file) {
                    buffer_array.push(req.files.n_file[i]);
                }
            } else {
                buffer_array.push(req.files.n_file);
            }
            // console.log(buffer_array.length);
            buffer_array.forEach((item, idx) => {
                var buff = new Buffer.from(item.data, 'base64');
                var fileName = item.name.replace("/", "");
                files.push(fileName);
                var filePath = path.join(__dirname, "..", "public", "noticeF", fileName);
                var fd = fs.openSync(filePath, 'w');
                fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
                    if (error) {
                        console.log('err');
                        throw err;
                    }
                    if (idx === buffer_array.length - 1) {
                        var n_file = files.toString();
                        var query = "INSERT INTO notice (n_title, n_content, n_file, n_uidx, n_date) VALUES ('" + n_title + "','" + n_content + "','" + n_file + "', 1, now());";
                        mysql.query(query, (result, field) => {
                            pushNotification(body);
                            res.redirect('admin_n');
                        });
                    }
                });
            });
            // console.log(2);
        } else {
            var n_file = "";
            var query = "INSERT INTO notice (n_title, n_content, n_file, n_uidx, n_date) VALUES ('" + n_title + "','" + n_content + "','" + n_file + "', 1, now());";
            mysql.query(query, (result, field) => {
                pushNotification(body);
                res.redirect('admin_n');
            });
        }
    } else {
        res.redirect('admin');
    }
});


function pushNotification(body) {
    var push_data = {
        // 수신대상
        to: "/topics/NSB",
        // App이 실행중이지 않을 때 상태바 알림으로 등록할 내용
        notification: {
            title: "NS-Businesss",
            body: body,
            sound: "default",
            click_action: "FCM_PLUGIN_ACTIVITY",
            icon: "fcm_push_icon"
        },
        // 메시지 중요도
        priority: "high",
        // App 패키지 이름
        restricted_package_name: "com.apps.notifexample",
        // App에게 전달할 데이터
        data: {
            num1: 2000,
            num2: 3000
        }
    };

    fcm.send(push_data, (err, respone) => {
        if (err)
            console.log(err);
        else {
            console.log('Push메시지 발송 되었습니다.');
            console.log(respone);
        }
    });

}

//==================================================================== 관리자 기업지원소식
router.get('/admin_s', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM support ORDER BY s_date DESC";
        mysql.query(query, (support, field) => {
            res.render('admin_s', {
                support: support
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_s_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var s_idx = req.query.s_idx;
        var query = "SELECT * FROM support WHERE s_idx=" + s_idx;
        mysql.query(query, (support, field) => {
            res.render('admin_s_m', {
                support: support
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.post('/admin_s_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var s_idx = req.body.s_idx;
        var s_title = req.body.s_title;
        var s_content = req.body.s_content;
        if (req.files) {
            var buffer_array = [];
            var files = [];
            if (Array.isArray(req.files.n_file)) {
                for (i in req.files.n_file) {
                    buffer_array.push(req.files.n_file[i]);
                }
            } else {
                buffer_array.push(req.files.n_file);
            }
            buffer_array.forEach((item, idx) => {
                var buff = new Buffer.from(item.data, 'base64');
                var fileName = item.name.replace("/", "");
                files.push(fileName);
                var filePath = path.join(__dirname, "..", "public", "supportF", fileName);
                var fd = fs.openSync(filePath, 'w');
                fs.write(fd, buff, 0, buff.length, 0, function (error, wrritten) {
                    if (error) {
                        // console.log('err');
                        throw err;
                    }
                    if (idx === buffer_array.length - 1) {
                        // console.log('sql');
                        var s_file = files.toString();
                        var query = "UPDATE support SET s_title='" + s_title + "', s_content='" + s_content + "', s_file='" + s_file + "' WHERE s_idx=" + s_idx + ";";
                        mysql.query(query, (result, field) => {
                            res.redirect('admin_s');
                        });
                    }
                });
            });
        } else {
            var s_file = "";
            var query = "UPDATE support SET s_title='" + s_title + "', s_content='" + s_content + "', s_file='" + s_file + "' WHERE s_idx=" + s_idx + ";";
            mysql.query(query, (result, field) => {
                res.redirect('admin_s');
            });
        }
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_s_d', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var s_idx = req.query.s_idx;
        var query = "DELETE FROM support WHERE s_idx=" + s_idx;
        mysql.query(query, (result, field) => {
            res.redirect('admin_s');
        })
    } else {
        res.redirect('admin');
    }
});

//==================================================================== 관리자 회원관리
// user - u_industry
// ===================
// 1 제조⋅생산⋅화학업
// 2 건설업
// 3 IT⋅정보통신업
// 4 기관⋅협회
// 5 서비스업
// 6 미디어⋅광고업
// 7 기타

// user - u_grade
// ===================
// 1 회장
// 2 전임회장
// 3 역대회장
// 4 부회장
// 5 부회장(대)
// 6 수석부회장
// 7 감사
// 8 총무
// 9 이사
// 10 자문이사
// 11 재무
// 12 고문
// 13 회원
// 30 비회원

router.get('/admin_u', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM user;";
        mysql.query(query, (user, field) => {
            res.render('admin_u', {
                user: user
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_u_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var u_idx = req.query.u_idx;
        var query = "SELECT * FROM user WHERE u_idx =" + u_idx + ";";
        mysql.query(query, (user, field) => {
            res.render('admin_u_m', {
                user: user
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.post('/admin_u_m', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var u_idx = req.body.u_idx;
        var u_name = req.body.u_name;
        var u_email = "";
        if (req.body.u_email) {
            u_email = req.body.u_email;
        }
        var u_industry = req.body.u_industry;
        var u_grade = req.body.u_grade;
        var u_emailchk = 0;
        if (req.body.u_emailchk) {
            u_emailchk = 1;
        }
        var u_infochk = 0;
        if (req.body.u_infochk) {
            u_infochk = 1;
        }
        var query = "UPDATE user SET u_name='" + u_name + "', u_email='" + u_email + "', u_emailchk=" + u_emailchk + ", u_infochk=" + u_infochk + ", u_industry=" + u_industry + ", u_grade=" + u_grade + " WHERE u_idx=" + u_idx + ";";
        // console.log(query);

        if (u_grade !== 30) {
            fs.mkdirSync(__dirname + "/../public/i_image/" + u_idx);
            fs.mkdirSync(__dirname + "/../public/i_productimage/" + u_idx);
        }
        mysql.query(query, (result, field) => {
            res.redirect('admin_u');
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_u_d', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var u_idx = req.query.u_idx;
        var query = "DELETE FROM user WHERE u_idx=" + u_idx + ";";
        mysql.query(query, (result, field) => {
            res.redirect('admin_u');
        });
    } else {
        res.redirect('admin');
    }
});

//==================================================================== 관리자 연혁
router.get('/admin_h', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var query = "SELECT * FROM nsb_history ORDER BY nh_date DESC;"
        mysql.query(query, (result, field) => {
            res.render('admin_h', {
                his: result
            });
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_h_d', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var nh_idx = req.query.nh_idx;
        var query = "DELETE FROM nsb_history WHERE nh_idx = " + nh_idx + ";";
        mysql.query(query, (result, field) => {
            res.redirect('admin_h');
        });
    } else {
        res.redirect('admin');
    }
});

router.get('/admin_h_a', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        res.render('admin_h_a');
    } else {
        res.redirect('admin');
    }
});

router.post('/admin_h_a', function (req, res, next) {
    if (req.cookies.u_grade == '99') {
        var nh_date = req.body.nh_date;
        var nh_content = req.body.nh_content;
        var query = "INSERT INTO nsb_history (nh_date, nh_content) VALUES ('" + nh_date + "', '" + nh_content + "');";
        mysql.query(query, (result, field) => {
            res.redirect('admin_h');
        });
    } else {
        res.redirect('admin');
    }
});

router.post('/test2', function (req, res, next) {

});

module.exports = router;