
import showMessage from "./showMessage.js";
let USERS = [
  
]
const usernameInputElement = document.getElementById("username");
const emailInputElement = document.getElementById("email");
const passwordInputElement = document.getElementById("password")
const registerBtn = document.getElementById("register-user-btn");
const userskey = localStorage.getItem("users")
if(userskey){
    USERS = JSON.parse(userskey)
}

registerBtn.onclick = async (event) =>{
    event.preventDefault()
    const id=  USERS.length ===0?0:(USERS[USERS.length-1].id)+1
    const username = usernameInputElement.value;
    const email  = emailInputElement.value;
    const password = passwordInputElement.value;
    if(!username || !email || !password){
        window.alert("please fill all fields")
        return;
    }
    const newUser = {
        id,
        username,
        email,
        password
    }
   USERS.push(newUser);
   localStorage.setItem("users",JSON.stringify(USERS));
    await showMessage("user successfully created!")
   window.location.href = "./signIn.html"
}

