import {
  current
} from "MainView";

export default class GalleryPage {
  constructor() {
    this.app = current.app;
    this.fix = "http://58.229.184.156:3000/gallery_list"
    this.Url = this.fix;
    this.href = [this.Url];
  }

  onPageLoaded(res) {
    var href = JSON.parse(res.json).url;
    if (this.href[this.href.length - 1] != href) this.href.push(href);
  }

  goBack() {
    if (this.href.length == 1) this.app.navigation.goBack()
    else {
      this.href.pop();
      this.Url = this.href[this.href.length - 1];
    }
  }

}