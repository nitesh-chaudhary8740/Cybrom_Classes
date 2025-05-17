// for (let index = 1; index <= 10; index++) {
//     console.log(index)
    
// }
// const number = prompt("enter your number")
// const sqr = Number(number*number);
// console.log("square of "+number+" = ",sqr)
// for (let index = 10; index >= 1; index--) {
//     console.log(`${sqr +" x "+index+" = " +(index*sqr)}`)
    
// }
const number = Number(prompt("enter your number"))
if(number%2==0){
    console.log("Table of number is")
for (let index = 1; index <= 10; index++) {
 
        console.log(index*number)
    
    
}
}else{
    console.log(`cube of ${number} = ${number*number*number}`)
}

