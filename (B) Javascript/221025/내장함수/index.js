// js 내장 함수들은 많다.

setTimeout(function(){
    console.log("Test");
}, 5000);

setInterval(function(){
    console.log("5초가 흘렀습니다.");
}, 5000);

let r;

r = function () {
    onsole.log("two");
}

r = function () {
    console.log("one");
}

r();