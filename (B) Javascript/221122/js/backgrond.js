const bgImage = ["0.jpeg", "1.jpeg", "2.jpeg"];

const bg = document.createElement("img");

bg_arr = bgImage[Math.floor(Math.random() * bgImage.length)];

bg.src = `img/${bg_arr}`;

document.body.appendChild(bg);
