import {
  current
} from "MainView";
var InterApp = require("FuseJS/InterApp");
export default class NoticePage {
  constructor() {
    this.app = current.app;
    this.fix = "http://58.229.184.156:3000/notice"
    this.Url = this.fix;
    this.href = [this.Url];
  }

  onPageLoaded(res) {
    var href = JSON.parse(res.json).url;

    if (this.href[this.href.length - 1] != href) this.href.push(href);
    if (href.split('/')[3].indexOf('file') != -1) {
      var target = href.split('/')[3].split('?')[1].split('=')[1];
      this.goBack();
      console.log(target);
      InterApp.launchUri('http://58.229.184.156:3000/download/' + target);

    }

  }

  goBack() {
    if (this.href.length == 1) this.app.navigation.goBack()
    else {
      this.href.pop();
      this.Url = this.href[this.href.length - 1];
    }
  }
}