/* 
구구단

사용자가 입력단 수에 해당하는 단을 콘솔에 출력하시오.

선언적 함수 정의
function multiplication_table (n) {

익명 함수 정의
let multiplication_table = function (n){

화살표 함수 정의
let multiplication_table = (n) => {
*/


function multiplication_table (n){
    for (i = 1; i < 10; i++) {
        console.log(n*i);
    }
}

let input = prompt("원하는 구구단을 입력하시오. ");
multiplication_table(5)

