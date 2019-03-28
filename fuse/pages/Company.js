import { current } from "MainView";

export default class CompanyPage {
  constructor(app = current.app) {
    this.app = app;
    this.filter = [{id:0, text:'전체'},{id:1,text:'제조·생산·화학업'},{id:2,text:'건설업'},{id:3,text:'IT·정보통신업'},
                  {id:4,text:'기관·협회'},{id:5,text:'서비스업'},{id:6,text:'미디어·광고업'},{id:7,text:'기타'}];
    this.filter_value=0;
    this.list = null;
    this.count = 0;
    this.path = 'member?filter='
    setTimeout(() => {
      this.get_list();
    }, 50)
  }

  
  get_list(){
    var result = this.app.apiFetch(this.path+this.filter_value,undefined)
    result.then((res)=>{
      var result = JSON.parse(res._bodyInit);
      this.list=result
      this.count = this.list.length;
    })
  }

  filter_select(item){
    this.filter_value=item.data.id;
    this.get_list();
  }

  goCompany_int(item){
    this.app.navigation.goCompany_int(item.data);
  }
  
}
