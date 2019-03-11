import { current } from "MainView";

export default class Login {
  constructor() {
    this.app = current.app;
    this.id = String();
    this.pw = String();
  }
}
