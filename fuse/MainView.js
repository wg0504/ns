import Navigation from "Navigation/Navigation";
export let current = {};

export function color_select(u_industry) {
  switch (u_industry) {
      case 1:
          return "#fb1e1e";
      case 2:
          return "#ffa511";
      case 3:
          return "#ffec00";
      case 4:
          return "#35cd18";
      case 5:
          return "#0039ff";
      case 6:
          return "#0e1455";
      case 7:
          return "#7016d0";
  }
}

export default class MainView {
  constructor() {
    current.app = this;
    this.info = {u_idx:'',u_id:'',u_name:'',u_industry:''};
    this.navigation = new Navigation();
    this.url="http://58.229.184.156:3000/"
  }
  apiFetch(path, options) {
    var url = encodeURI(this.url + path);
  
    if(options === undefined) {
      options = {};
    }
    
    // If a body is provided, serialize it as JSON and set the Content-Type header
    if(options.body !== undefined) {
      options = Object.assign({}, options, {
        body: JSON.stringify(options.body),
        headers: Object.assign({}, options.headers, {
          "Content-Type": "application/json"
        })
      });
    }
    
    // Fetch the resource and parse the response as JSON
    return fetch(url, options)
      .then(function(response) { return response });
  }
}
