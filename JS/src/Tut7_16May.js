const l = 5
for (let index = l; index >=0; index--) {
  for (let j = 0; j <= index; j++) {
    document.write('*')
    // document.write('</br>')
    
  }
   document.write('</br>')  
}

for (let i = 0; i <l; i++) {
  for (let j = 0; j <l; j++) {
   if(((i==0 || i == l-1)||(j==0 || j==l-1))){
    document.write("* ")
   }
   else{
    document.write("&nbsp&nbsp&nbsp")
   }
   
  }
   document.write('</br>')  
}