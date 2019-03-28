import { current } from "MainView";
import { color_select } from "../MainView";
var Timer = require("FuseJS/Timer");
export default class Main {
  constructor() {
    this.app = current.app;
    this.info = this.app.info;
    this.ActiveIndex = 0;
    this.Item = [
      { Url: "http://58.229.184.156:3000/images/rolling.jpg" },
      { Url: "http://58.229.184.156:3000/images/rolling2.jpg" },
      { Url: "http://58.229.184.156:3000/images/rolling3.jpg" }
    ];
    this.sidebar=false;
    this.timer = null;
    this.industries = [
      "제조·생산·화학업",
      " 미디어·광고업 ",
      "IT·정보통신업",
      "기관·협회",
      "서비스업",
      "건설업",
      "기타"
    ];
    this.create();
    this.color="";
  }

  load_id(info){
    this.info = info;
    this.color = color_select(this.info.u_industry);
    console.log(JSON.stringify(this.info));
  }

  logout(){
    this.info = {u_id:'',u_name:''};
  }

  next() {
    if (this.ActiveIndex < 2) this.ActiveIndex++;
    else this.ActiveIndex = 0;
  }

  create() {
    this.timer = Timer.create(
      () => {
        this.next();
      },2000,true);
  }

  clear() {
    Timer.delete(this.timer);
  }

  open() {
    this.sidebar = !this.sidebar
  }

}
