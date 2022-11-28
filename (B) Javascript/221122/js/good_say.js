const goodSays = [
  {
    goodsay: "삶이 있는 한 희망은 있다.",
    author: "키케로",
  },
  {
    goodsay: "산다는것 그것은 치열한 전투이다.",
    author: "로망로랑",
  },
  {
    goodsay: "하루에 3시간을 걸으면 7년 후에 지구를 한바퀴 돌 수 있다.",
    author: "사무엘존슨",
  },
  {
    goodsay: "언제나 현재에 집중할수 있다면 행복할것이다.",
    author: "파울로 코엘료",
  },
  {
    goodsay: "신은 용기있는자를 결코 버리지 않는다.",
    author: "켄러",
  },
];

const good_say = document.querySelector("#GoodSay span:first-child");
const author = document.querySelector("#GoodSay span:last-child");

let test5 = goodSays[Math.floor(Math.random() * goodSays.length)];

good_say.innerText = test5.goodsay;
author.innerText = `- ${test5.author}`;
