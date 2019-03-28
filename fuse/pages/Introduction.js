import {
  current
} from "MainView";

export default class Introduction {
  constructor() {
    this.app = current.app;
    this.com_info = new this.info(this.app.url);
    this.mission = "지역기업을 대표하는 협의회로서\n회원간의 경제적·기술적 성장을 위해\n가능한모든 지식과 정보를 도덕적으로\n올바르게 활용하여 제공 하므로서\n기업 경쟁력을 국제수준이 될수있게"
    this.labels = ['제조·생산·화학업', '건설업', '정보통신업', '기관·협회', '서비스업', '미디어·광고업', '기타'];
    this.colors = ["#fb1e1e", "#ffa511", "#ffec00", "#35cd18", "#0039ff", "#0e1455", "#7016d0"];
    this.data1 = undefined;
    this.value = this.app.apiFetch('memeber_count',undefined).then((res)=>{
      return  JSON.parse(res._bodyInit)['count']
    })
    this.value2 = new Date().getFullYear() - 1995;
    this.random();
  }

  create() {
    var list = []
    for (var i = 1; i <= this.colors.length; ++i) {
      var obj = new this.Item(i, 0, this.colors[i - 1], this.labels[i - 1]);
      list.push(obj);
    }
    return list;
  }

  random() {
    this.data1 = this.create();
  }

  Item(y, z, color, label) {
    this.y = y;
    this.z = z;
    this.color = color;
    this.label = label
  }

  info(url){
    this.i_slogan = '“회원과 함께 성장하고 화합하는 논산시 기업인 협의회 입니다.”'
    this.i_name = "충남 논산시\n기업인 협의회"
    this.i_addr = "별곡 별곡로 113-47"
    this.i_phoen = "041-732-2559"
    this.i_url = "http://www.korea.co.kr"
    this.i_image = url+"images/intro_image.png"
    this.u_name = "Nonsan Industry Association"
    this.i_comment = "1996년 12월에 논산시기업인협의회가 창립되어 오늘에 이르기까지 21년의 역사와 함께 우리 지역의 발전과 화합을 위하여 함께 노력하며 수고하신 회원분들게 진심으로 감사를 드립니다.\n\n날로 발전하는 회원사를 보며 든든하고 행복함을 느낍니다."
  }

}