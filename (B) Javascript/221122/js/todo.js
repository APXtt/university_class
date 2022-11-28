const toDoForm = document.getElementById("todo-form");
const toDoInput = toDoForm.querySelector("input");
const toDoList = document.getElementById("todo-list");
const dataTodo = [];

function todoSubmit(event){
    event.preventDefault();
    const newTodo = toDoInput.value;
    toDoInput.value = "";
    todoAdd(newTodo);
}

function todoAdd(newTodo){    
    const li = document.createElement("li");
    const span = document.createElement("span");
    span.innerText = newTodo;

    if (localStorage.getItem("todo") !== null) {
        let a = JSON.parse(localStorage.getItem("todo"));
        console.log(a);

        // span.innerText = a;
        // li.appendChild(span);
        // toDoList.appendChild(li);
        // toDoForm = JSON.parse(localStorage.getItem("todo"));
        // toDoForm = a;
    }
    else {
        li.appendChild(span);
        toDoList.appendChild(li);

        dataTodo.push(newTodo);
        console.log(dataTodo);
        localStorage.setItem("todo", JSON.stringify(dataTodo));
    }

    li.addEventListener("click", function(){
        if (li.style.textDecoration == "line-through") {
            li.style.textDecoration = "";
        }
        else {
            li.style.textDecoration = "line-through";
        }
    });
    li.addEventListener("dblclick", function(){
        toDoList.removeChild(li);
    });
}
toDoForm.addEventListener("submit", todoSubmit);

