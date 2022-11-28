const clock = document.createElement("h2");

function test() {
  const date = new Date();
  let hours = String(date.getHours()).padStart(2, 0);
  let minutes = String(date.getMinutes()).padStart(2, 0);
  let seconds = String(date.getSeconds()).padStart(2, 0);
  clock.innerText = `${hours}:${minutes}:${seconds}`;
}

setInterval(test, 1000);

document.body.appendChild(clock);
