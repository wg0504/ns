import Login from "../pages/Login";
import Splash from "../pages/Splash";
import Sign from "../pages/Sign";
import SignInfo from "../pages/SignInfo";
import Main from "../pages/Main";
import Notice from "../pages/Notice";
import Gallery from "../pages/Gallery";
import Support from "../pages/Support";
import Company from "../pages/Company";
import Intro from "../pages/Introduction";
import Company_int from "../pages/Company_int";
// import Event from "../pages/Event";

export default class Navigation {
  constructor() {
    this.Main = new Main();
    this.Login = undefined;
    this.pages = [this.Main];
  }

  goSplash() {
    this.pages = [new Splash()];
  }

  goLogin() {
    this.Login = new Login();
    this.pages.push(this.Login);
  }

  goSign() {
    this.pages.push(new Sign());
  }

  goSignInfo() {
    this.pages.push(new SignInfo());
  }

  goBack() {
    this.pages.pop();
  }

  goNotice() {
    this.pages.push(new Notice());
  }

  goGallery() {
    this.pages.push(new Gallery());
  }

  goSupport() {
    this.pages.push(new Support());
  }

  goEvent() {
    this.pages.push(new Event());
  }

  goIntro() {
    this.pages.push(new Intro());
  }

  goCompany() {
    this.pages.push(new Company());
  }

  goCompany_int(item) {
    this.pages.push(new Company_int(item));
  }


  backLogin() {
    while (this.pages[this.pages.length - 1] !== this.Login) {
      this.pages.pop();
    }
  }

  backMain() {
    while (this.pages[this.pages.length - 1] !== this.Main) {
      this.pages.pop();
    }
  }

  login(info) {
    while (this.pages[this.pages.length - 1] !== this.Main) {
      if (this.pages[this.pages.length - 2] === this.Main) this.pages[this.pages.length - 2].load_id(info);
      this.pages.pop();
    }

  }


}