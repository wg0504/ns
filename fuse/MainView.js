import Navigation from "Navigation/Navigation";
export let current = {};
export default class MainView {
  constructor() {
    current.app = this;
    this.info = {};
    this.navigation = new Navigation();
  }
}
