import {
  current,
  color_select
} from "MainView";

var phone = require("FuseJS/Phone");
var InterApp = require("FuseJS/InterApp");

export default class Company_int {
  constructor(item) {
    this.app = current.app;
    this.item = item;
    this.com_info = new this.info(this.item, this.app.url);
    if (item.i_image === null) {
      this.i_image = "";
    } else {
      this.i_image = item.i_image;
    }
    this.cir_color = color_select(this.item.u_industry);
    this.value = this.item.i_staff === null ? '0' : this.item.i_staff;
    this.value2 = new Date().getFullYear() - (this.item.i_history === null ? '0' : this.item.i_history);
    if(this.value2 === new Date().getFullYear()) this.value2 = 0;
    console.log(this.item.i_productimage)
  }

  call() {
    phone.call("+82 " + this.item.i_phone);
  }

  info(item, url) {
    this.i_comment = item.i_comment
    this.i_name = item.i_name
    this.i_addr = item.i_addr
    this.i_phoen = item.i_phoen
    this.i_url = item.i_url
    this.i_image = url +"industry/"+ item.i_image
    this.i_productimage = url +"product/"+item.i_productimage
    this.i_product = item.i_product
    this.u_name = item.u_name
  }

  link(){
    InterApp.launchUri(this.com_info.i_url);
  }
}