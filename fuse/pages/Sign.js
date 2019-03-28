import {
  current
} from "MainView";

export default class Sign {
  constructor() {
    this.app = current.app;
    this.user = new this.info();
    this.checklist = new this.check();
    this.regexp = /^[A-Za-z0-9+]{3,20}$/;
    this.reg_email = /^[0-9a-zA-Z]([-_.]?[0-9a-zA-Z])*@[0-9a-zA-Z]([-_.]?[0-9a-zA-Z])*.[a-zA-Z]{2,3}$/i;

    this.id_err = "이미 가입 된 아이디 입니다.";
    this.email_err = "이미 가입 된 이메일 입니다.";
    // this.deny_char = /^[ㄱ-ㅎ|가-힣|a-z|A-Z|0-9|\*]{4,10}$/
  }

  onSubmit() {
  
    if (this.regexp.test(this.user.u_id)) {
      this.checklist.id_chk = false;
      this.id_err = "이미 가입 된 아이디 입니다.";
    } else {
      this.id_err = "";
      this.checklist.id_chk = true;
    }
    if (this.user.u_pw.length > 6 && this.user.u_pw.length < 15) {
      this.checklist.pw_chk = false;
    } else {
      this.checklist.pw_chk = true;
    }
    if (this.user.u_pw === this.user.u_cpw) {
      this.checklist.cpw_chk = false;
    } else {
      this.checklist.cpw_chk = true;
    }
    if (this.reg_email.test(this.user.u_email)) {
      this.checklist.email_chk = false;
      this.email_err = "이미 가입 된 아이디 입니다.";
    } else {
      this.email_err = "";
      this.checklist.email_chk = true;
    }
    if (this.user.u_name.length > 0) {
      this.checklist.name_chk === false
    } else {
      this.checklist.name_chk === true
    }
    if(this.user.u_industry !== ""){
      var indu_chk = false;
    }else{
      var indu_chk = true;
    }

    var id_chk = this.checklist.id_chk;
    var pw_chk = this.checklist.pw_chk;
    var cpw_chk = this.checklist.cpw_chk;
    var email_chk = this.checklist.email_chk;
    var name_chk = this.checklist.name_chk;
    console.log(indu_chk);
    if (id_chk === false && pw_chk === false && cpw_chk === false && email_chk === false && name_chk === false && indu_chk === false) {
      new Promise((resolve, reject) => {
        resolve(this.app.apiFetch('signup', {
          method: "POST",
          body: this.user
        }));
      }).then((res) => {
        console.log(res.status)
        if (res.status === 200) {
          this.app.navigation.backLogin();
        } else {
          var target = JSON.parse(res._bodyText).state;
          if(target==="id"){
            this.checklist.id_chk = true;
          }else{
            this.checklist.email_chk = true;
          }

        }
      })
    }
  }

  info() {
    this.u_id = "";
    this.u_pw = "";
    this.u_cpw = "";
    this.u_name = "";
    // this.u_nick = "";
    this.u_email = "";
    this.u_emailchk = false;
    this.u_infochk = false;
    this.u_industry = "";
  }

  check() {
    this.id_chk = false;
    this.pw_chk = false;
    this.cpw_chk = false;
    this.name_chk = false;
    this.email_chk = false;
  }




}