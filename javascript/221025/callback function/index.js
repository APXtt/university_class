function callTenTimes(callback){
    for (i=0; i<10; i++) {
        callback();
    }
}

callTenTimes(function() {
    console.log("함수호출");
});