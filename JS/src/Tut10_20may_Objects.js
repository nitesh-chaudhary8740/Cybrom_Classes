const person = {};
//object are data type which are unordered;
const name = prompt("enter your name");
const age = prompt("enter your age");
const contact = prompt("enter your contact");
const myLocation = prompt("enter your location");
if(!name||!age||!contact){
    alert("enter all details")
}
else{
    person.name =name;
    person.age =age;
    person.contact =contact;
    person.location =myLocation;
}
const inst = Object.create(person);
console.log(inst.name)
console.log(inst==person)
console.log(inst===person)
console.log(person)

