import { current } from "MainView";

export default class Sign {
  constructor() {
    this.app = current.app;
  }
  onPageLoaded(res) {
    console.log("WebView arrived at " + JSON.stringify(res));
  }
}
