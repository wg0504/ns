import { current } from "MainView";

export default class Login {
  constructor() {
    this.app = current.app;
    this.id = String();
    this.pw = String();
  }

  Login() {
    var that = this;
    this.app.apiFetch('login',{method:'POST',body:{u_id:this.id,u_pw:this.pw}}).then(res=>{
      if(res.status===200){
        that.app.info = JSON.parse(res._bodyInit)[0];
        this.app.navigation.login(that.app.info);
      }else{

      }
    })
  }
}
