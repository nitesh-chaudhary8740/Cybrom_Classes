const obj = {
    user:'nik',
    id:123,
    email:'nik@mail.com',
    arr:["cybrom",28,'p']
}
const keys = Object.keys(obj);
console.log(keys);
const values = Object.values(obj)
console.log(values)
console.log(obj.arr[2])
obj.arr.push('secure')
console.log(obj)
function checkEvenOdd(number){
    if(number%2===0){
        console.log(number, 'even')
    }
    else{
        console.log(number,'is odd')
    }
}
checkEvenOdd(8)
