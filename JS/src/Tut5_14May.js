// const age = prompt("Enter you age")
// if(Number(age)>=18){
//     alert("you're eligble")
// }
// else{
//       alert("you're not eligble") 
// }
// let number = prompt("enter your number");
// if(Number(number)!=0){
// do{
//     alert(`your number is ${number}`)
//     number = prompt("enter your number again");
// }
// while(Number(number)!=0)
// }
// let num = 1;
// while(num<=10){
//     console.log(num++)
// }
const number = prompt("enter your number");
let index = 1;
while(index<=10){
    // console.log(Number(number)*(index++))
    document.write(`<h2>${Number(number)*(index++)}</h2>`)
}

