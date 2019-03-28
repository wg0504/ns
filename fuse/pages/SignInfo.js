import { current } from "MainView";

var InterApp = require("FuseJS/InterApp");

export default class SignInfo {
  constructor() {
    this.app = current.app;
    this.text = this.app.apiFetch('clause1',undefined).then(res=>{return res._bodyInit});
    this.text2 = this.app.apiFetch('clause2',undefined).then(res=>{return res._bodyInit});
    this.check_one = false;
    this.check_two = false;

  }
  check(){
    if(this.check_one===true && this.check_two===true) this.app.navigation.goSign();
  }
}
