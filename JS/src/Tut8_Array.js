// const arr = ["hello",123, true, {city:'rewa'}, Symbol('Rewa'),null,undefined,3432.43];
// for(let element of arr){//iterate over array element
//     console.log(element)
// }
// for(let index in arr){//iterating over index
//     console.log(index,arr[index])
// }
const arr = []
let i = 0;
while(true){
    let element = prompt("enter the value");
    if(!element){
        console.log(arr)
        break;
    }
    arr[i] = element;
        i++; 
}
//firs last digit - and sum
//10 input from array and sum of them 


