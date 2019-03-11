import Login from "../pages/Login";
import Splash from "../pages/Splash";
import Sign from "../pages/Sign";
import SignInfo from "../pages/SignInfo";

export default class Navigation {
  constructor() {
    this.pages = [new Login()];
  }

  goSplash() {
    this.pages = [new Splash()];
  }

  goLogin() {
    this.pages = [new Login()];
  }

  goSign() {
    this.pages.pop();
    this.pages.push(new Sign());
  }

  goSignInfo() {
    this.pages.push(new SignInfo());
  }

  goBack() {
    this.pages.pop();
  }
}
