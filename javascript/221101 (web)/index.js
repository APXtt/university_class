const loginForm = document.querySelector("#loginForm"); //# -> id를 불러오는 선택자, . -> class 선택자
const loginInput = document.querySelector("#loginForm input");
const h1 = document.querySelector("h1");



function test(event) {
    event.preventDefault();
    
    const userName = loginInput.value;
    localStorage.setItem("username", userName);
    loginForm.classList.add("hidden");
    h1.innerText = "Hello, " + userName;
}


if(localStorage.getIten("username") === null){
    loginForm.addEventListener("submit", test);
}
else{
    const userName = localStorage.getItem("username");
    loginForm.classList.add("hidden");
    h1.innerText = "Hello, " + userName;

}