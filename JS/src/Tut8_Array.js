// const arr = ["hello",123, true, {city:'rewa'}, Symbol('Rewa'),null,undefined,3432.43];
// for(let element of arr){//iterate over array element
//     console.log(element)
// }
// for(let index in arr){//iterating over index
//     console.log(index,arr[index])
// // }

//===================1st================
// const arr = []
// let i = 0;
// let sum = 0;
// while(true){
//     let element = prompt("enter the value");
//     if(!element){
//         for (const element of arr) {
//             sum = sum + element;
//         }
//         console.log(arr)
//         console.log(`sum is: ${sum}`)
//         break;
//     }
//     if(!isNaN(Number(element))){
//         arr[i] =Number(element);
//         i++; 
//     }
// }
//=======================2nd=============
const number = Number(prompt("enter your Number"))
const lastDigit = number%10;
let temp = number;
while(parseInt(temp/10)>0){
    temp = parseInt(temp/10)
}
const firstDigit = temp;
console.log('first digit: ',firstDigit)
console.log('last digit: ',lastDigit)
const arr = [1,2,34,45];
console.log(Object.keys(arr))
//firs last digit - and sum
//10 input from array and sum of them 


