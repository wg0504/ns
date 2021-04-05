const express = require('express');
const router = express.Router();
const mysql = require('../public/javascripts/db');
const fs = require('fs');
const path = require('path');
const nodemailer = require('nodemailer');
const FCM = require('fcm-node');
var async = require('async');
const fcm = new FCM("AAAABLN1jo8:APA91bHJWha_5Pw_khdNGHeqcooCFQT3JOWTnq98tKf3W3A-JldcqWmQwObLgFIlnS59tKDiZ1A0k1dugTOvNXHwUUEXdKdzgvU1IANVCanz0nnGKYhI7MORLGuUTKBvVzU7aPkHU_xf");

var grades = [{
    id: 0,
    grade: "관리자"
},
{
    id: 1,
    grade: "회장"
}, {
    id: 2,
    grade: "전임회장"
}, {
    id: 3,
    grade: "역대회장"
}, {
    id: 4,
    grade: "부회장"
},
{
    id: 5,
    grade: "부회장(대)"
}, {
    id: 6,
    grade: "수석부회장"
}, {
    id: 7,
    grade: "감사"
}, {
    id: 8,
    grade: "총무"
}, {
    id: 9,
    grade: "이사"
},
{
    id: 10,
    grade: "자문이사"
}, {
    id: 11,
    grade: "재무"
}, {
    id: 12,
    grade: "고문"
}, {
    id: 13,
    grade: "회원"
}, {
    id: 30,
    grade: "비회원"
}
];

/* GET home page. */
router.get('/', function (req, res, next) {
    res.render('index', {
        title: 'Express'
    });
});

router.get('/history', function (req, res, next) {
    var query = "select * from nsb_history order by nh_idx desc;"
    mysql.query(query, (result, field) => {
        res.render('history', {
            his: result
        });
    });
});

router.post('/history_add', function (req, res, next) {
    console.log(req.body);
    var year = req.body.year;
    var text = req.body.text;
    var nh_date = "" + year + text.slice(0, 2) + text.slice(4, 6);
    var nh_content = text.slice(8, text.length);
    console.log(nh_date);
    console.log(nh_content);
    var query = "INSERT INTO nsb_history (nh_date, nh_content) VALUES ('" + nh_date + "','" + nh_content + "');";
    mysql.query(query, (result, field) => {
        console.log(result);
        res.redirect('history');
    });
});

router.get('/test', function (req, res, next) {
    res.render('test', {});
});

router.get('/clause1', function (req, res, next) {
    res.render('clause1', {});
});

router.get('/clause2', function (req, res, next) {
    res.render('clause2', {});
});

router.get('/file', (req, res, next) => {
    res.render('file', {});
})

router.get('/search_main', (req, res, next) => {
    res.render('search_main', {});
})
router.get('/search_index', (req, res, next) => {
    res.render('search_index', {});
})

router.get('/member', (req, res, next) => {
    var filter = Number(req.query.filter);
    var i_name = req.query.i_name;
    var u_idx = req.query.u_idx;
    console.log(typeof (u_idx));
    if (u_idx == '1') {
        var query = "SELECT * FROM user WHERE u_idx = 1";
        mysql.query(query, (result, field) => {
            res.json(result);
        });

    } else {
        if (filter === 0) var query = 'SELECT * FROM user WHERE u_grade NOT IN (30) AND u_grade NOT IN (99) ORDER BY u_grade ASC';
        else if (i_name !== undefined) var query = 'SELECT * FROM user WHERE i_name LIKE "%' + i_name + '%" AND u_grade NOT IN (30) AND u_grade NOT IN (99) ORDER BY u_grade ASC';
        else var query = 'SELECT * FROM user where u_industry = ' + filter + ' AND u_grade NOT IN (30) AND u_grade NOT IN (99) ORDER BY u_grade ASC';
        mysql.query(query, (result, field) => {
            result.forEach((item, index, arr) => {
                if (result[index]['u_profile'] === null || result[index]['u_profile'] === '[NULL]')
                    result[index]['u_profile'] = "";
                result[index]['u_grade'] = grades[result[index]['u_grade']]['grade'];
            })
            res.json(result);
        })
    }

    console.log(query);

})


router.get('/memberDetail', async (req, res, next) => {
    try {
        var u_idx = req.query.u_idx;
        var query = `SELECT * FROM user WHERE u_idx = ${u_idx}`;

        mysql.query(query, (result, field) => {
            result.forEach((item, index, arr) => {
                if (result[index]['u_profile'] === null || result[index]['u_profile'] === '[NULL]')
                    result[index]['u_profile'] = "";
                result[index]['u_grade'] = grades[result[index]['u_grade']]['grade'];
            })
            res.json(result);
        })

    } catch (error) {
        res.status(404).send("fail");
    }

})




router.post('/signup', (req, respone, next) => {
    var user = req.body;
    console.log(user);
    var query_id = "SELECT u_id FROM user WHERE u_id LIKE '" + user.u_id + "'";
    var query_email = "SELECT u_email FROM user WHERE u_email LIKE '" + user.u_email + "'";
    var insert_user = "INSERT INTO user (u_id,u_pw,u_name,u_email,u_emailchk,u_infochk,u_industry,u_date,u_grade) VALUES ('" +
        user.u_id + "','" + user.u_pw + "','" + user.u_name + "','" + user.u_email + "'," + user.u_emailchk + "," +
        user.u_infochk + "," + user.u_industry + ", now(), " + user.u_grade + " )";

    mysql.query(query_id, (res, fie) => {
        mysql.query(query_email, (result, field) => {
            var id_count = res.length;
            var email_count = result.length;
            if (id_count === 0 && email_count === 0) {
                mysql.query(insert_user, (re, fi) => {
                    respone.status(200).json({});
                })
            } else if (id_count !== 0) {
                respone.status(400).json({
                    state: 'id'
                });
            } else if (email_count !== 0) {
                respone.status(400).json({
                    state: 'email'
                });
            }
        })
    })

})

router.post('/login', (req, res, next) => {
    var user = req.body;
    var query = "SELECT u_idx,u_id,u_name,u_industry,u_grade from user WHERE u_id LIKE '" + user.u_id + "' and u_pw LIKE '" + user.u_pw + "'";
    mysql.query(query, (result, field) => {
        if (result.length === 1) {
            result[0]['u_grade'] = result[0]['u_grade'] + ""
            res.status(200).json(result);
        } else {
            res.status(404).json({
                state: 'fail'
            });
        }
    })
})

router.post('/autologin', (req, res, next) => {
    var user = req.body;
    console.log(user);
    var query = "SELECT u_idx,u_id,u_name,u_industry,u_grade from user WHERE u_id LIKE '" + user.u_id + "'";
    mysql.query(query, (result, field) => {
        console.log(result);
        if (result.length === 1) {
            result[0]['u_grade'] = result[0]['u_grade'] + ""
            res.status(200).json(result);
        } else {
            res.status(404).json({
                state: 'fail'
            });
        }
    })
})

router.post('/find', (req, res, next) => {
    var u_email = req.body.u_email;
    var query = "SELECT u_id, u_pw FROM user WHERE u_email='" + u_email + "'";

    let transporter = nodemailer.createTransport({
        service: 'gmail',
        auth: {
            user: 'nsbc7014@gmail.com', // gmail 계정 아이디를 입력
            pass: 'ns7014**' // gmail 계정의 비밀번호를 입력
        }
    });

    mysql.query(query, (result, filed) => {
        console.log(result);
        let mailOptions = {
            from: 'nsbc7014@gmail.com', // 발송 메일 주소 (위에서 작성한 gmail 계정 아이디)
            to: u_email, // 수신 메일 주소
            subject: 'NS-Business 회원정보 찾기 결과입니다.', // 제목
            text: '회원님의 계정 정보는 아래와 같습니다. \n ·아이디 : ' + result[0].u_id + '\n ·비밀번호 : ' + result[0].u_pw // 내용
        };
        if (result.length > 0)
            transporter.sendMail(mailOptions, (error, info) => {
                if (error) {
                    console.log(error);
                }
                res.status(200).send('success');
            })
    })
})

router.get('/nsb_init', (req, res, next) => {
    var query = "SELECT COUNT(u_idx) FROM user WHERE u_grade NOT IN(30) AND u_grade NOT IN(99)";
    var query2 = "SELECT DATE_FORMAT(nh_date, '%Y') AS year FROM nsb_history GROUP BY DATE_FORMAT(nh_date, '%Y') ORDER BY DATE_FORMAT(nh_date, '%Y') DESC";

    var history_year = [];
    var history_list = [];
    mysql.query(query, (result, field) => {
        var count = result[0]['COUNT(u_idx)'];
        mysql.query(query2, (result2, field2) => {
            for (var i in result2) {
                for (var j in result2[i])
                    history_year.push({
                        idx: i,
                        year: result2[i][j]
                    });
            }
            res.status(200).json({
                'count': count,
                'history_year': history_year,

            })
        })

    })
})

router.get('/nsb_list', (req, res, next) => {
    var year = req.query.year;
    var query = "SELECT nh_content FROM nsb_history WHERE DATE_FORMAT(nh_Date,'%Y') LIKE " + year;
    var history_list = [];
    mysql.query(query, (result, filed) => {
        for (var i in result) {
            for (var j in result[i]) {
                var history = result[i][j].split(/\r?\n/);
                var arr = [];
                var json = {};
                for (var h in history) {
                    if (h > 1) {
                        arr = arr.concat(history[h]);
                    } else if (h == 1) {
                        json['addr'] = history[h];
                    } else if (h == 0) {
                        json['date'] = history[h];
                    }
                }
                json['content'] = arr;
                history_list.push(json);
            }
        }
        console.log(history_list);
        res.status(200).json({
            'history_list': history_list
        })
    })
})

router.get('/nsb_graph', (req, res, next) => {
    var query3 = "SELECT COUNT(u_industry) /  (SELECT COUNT(*) FROM user) AS count from user GROUP BY u_industry ORDER BY u_industry ASC";
    mysql.query(query3, (result3, filed3) => {
        res.status(200).send({
            history_wei: result3
        });
    })
})



router.get('/history_year', (req, res, next) => {
    var h_uidx = req.query.h_uidx;
    var query = "SELECT DATE_FORMAT(h_date, '%Y') AS year FROM history WHERE h_uidx = " + h_uidx + " GROUP BY DATE_FORMAT(h_date, '%Y') ORDER BY DATE_FORMAT(h_date, '%Y') DESC ";
    var history_year = [];
    mysql.query(query, (result, filed) => {
        for (var i in result) {
            for (var j in result[i])
                history_year.push({
                    idx: i,
                    year: result[i][j]
                });
        }
        res.status(200).json({
            'history_year': history_year,
        })
    })
})

router.get('/history_list', (req, res, next) => {
    var year = req.query.year;
    var h_uidx = req.query.h_uidx;
    var query = "SELECT h_idx , h_date, h_content, h_place FROM history WHERE DATE_FORMAT(h_date,'%Y') LIKE " + year + " AND h_uidx = " + h_uidx;
    console.log(query);
    var history_list = [];
    mysql.query(query, (result, filed) => {
        for (var i in result) {
            var json = {};
            for (var j in result[i]) {
                if (j === "h_date") {
                    var monthDay = result[i][j].split(" ")[0].replace(/-/g, "").slice(4, 8);
                    var month = monthDay.slice(0, 2);
                    var day = monthDay.slice(2, 4);
                    json[j] = month + "월 " + day + "일";
                    // console.log(); 
                } else {
                    json[j] = result[i][j];
                }

            }
            history_list.push(json);
        }
        console.log(history_list);
        res.status(200).json({
            'history_list': history_list
        })
    })
})

router.post('/history_delete', (req, res, next) => {
    var body = req.body;
    var query = "DELETE FROM history Where h_idx = "
    var progress = 0;
    async.forEachOf(body, (value, key, callback) => {
        console.log(value);
        mysql.query(query + value.h_idx, (result, field) => {
            console.log(result);
        })
        callback();
    }, (err) => {
        res.status(200).send("Success");
    })
})

router.get('/main', (req, res, next) => {
    var query1 = "SELECT n_idx ,n_title,n_date from notice ORDER BY n_idx DESC LIMIT 0,3"
    var query2 = "SELECT A.g_idx, A.g_title, A.g_date, A.g_image, B.count FROM gallery AS A LEFT JOIN (SELECT rg_gidx,COUNT(*) AS count FROM reply_gallery GROUP BY rg_gidx) AS B ON B.rg_gidx = A.g_idx  ORDER BY A.g_idx DESC LIMIT 0,5"
    var query3 = "SELECT s_idx, s_title,s_date FROM support ORDER BY s_idx DESC LIMIT 0,3"
    var query4 = "SELECT COUNT(u_industry) /  (SELECT COUNT(*) FROM user WHERE u_grade NOT IN(30) AND u_grade NOT IN(99)) AS count from user  WHERE u_grade NOT IN(30) AND u_grade NOT IN(99) GROUP BY u_industry  ORDER BY u_industry ASC";
    var final_res = {};
    mysql.query(query1, (result, field) => {
        final_res['notice'] = result;
        mysql.query(query2, (result2, field2) => {
            final_res['gallery'] = result2;
            mysql.query(query3, (result3, field3) => {
                final_res['support'] = result3;
                mysql.query(query4, (result4, field4) => {
                    final_res['industry'] = result4;
                    res.status(200).json(final_res);
                })
            })
        });
    });
})



router.post('/register', (req, res, next) => {
    console.log(req.body);
})

router.post('/change_password', (req, res, next) => {
    try {
        var u_idx = req.body.u_idx;
        var u_pw = req.body.u_pw;
        var query = "UPDATE user SET u_pw = '" + u_pw + "' WHERE u_idx = " + u_idx;
        mysql.query(query, (result, filed) => {
            res.status(200).send("Success");
        })
    } catch (error) {
        res.status(404).send("fail");

    }

})

module.exports = router;
