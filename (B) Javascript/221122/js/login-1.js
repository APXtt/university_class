const loginForm = document.querySelector("#loginForm");
const loginInput = document.querySelector("#loginForm input");
const h1 = document.querySelector("h1");
const h2 = document.querySelector("h2");

function test(event) {
  event.preventDefault();
  const userName = loginInput.value;
  localStorage.setItem("username", userName);
  loginForm.classList.add("hidden");
  h1.innerText = "Hello " + userName;
}

if (localStorage.getItem("username") === null) {
  loginForm.addEventListener("submit", test);
} else {
  const userName = localStorage.getItem("username");
  loginForm.classList.add("hidden");
  h1.innerText = "Hello " + userName;
}
