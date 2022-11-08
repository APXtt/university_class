const h2 = document.createElement('h2');

function test() {
    let today = new Date();
    let hours = String(today.getHours()).padStart(2, 0);
    let minutes = String(today.getMinutes()).padStart(2, 0);
    let seconds = String(today.getSeconds()).padStart(2, 0);
    h2.innerText = `${hours}:${minutes}:${seconds}`;
}

setInterval(test, 1000);

document.body.appendChild(h2);