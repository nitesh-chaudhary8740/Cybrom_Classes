const str = '23, " 45, 5454, 049: 0i';
const strArr = Array.from(str).filter(e=>{
        if(Number(e)){
            return Number(e)
        }
        if(e==' ') return e
})
console.log(strArr)