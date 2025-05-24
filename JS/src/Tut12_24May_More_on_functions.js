//user defined functions 4 type
//1. without argumment and no return
//2. with argument and no return 
//3. with argument and return 
//4. without argument and return 
function withoutArgWithoutReturn(){
    console.log('this is a function which implicitly return undefined')
}
const returnValue = withoutArgWithoutReturn('value')
console.log(returnValue);
function withArgWithReturn(para1,para2){
    return `your arguments are ${para1} and ${para2}`
}
console.log(withArgWithReturn('para1','para2'))

function demo(){
    console.log('first demo')
}
demo()
function demo(){
    console.log('2nd demo')
}
demo()