let baseurl = "http://localhost:3001/products";
// const getBtn = document.getElementById("get-data-btn");
async function getAllProducts(){
    try{
        const res = await fetch(baseurl);
        console.log(res)
        const data = await res.json();
        console.log(data)
        const products = document.getElementById("products");
        products.innerHTML = data.map(e=>{
            return `
            <h1>id:${e.id}</h1>
            <h1>id:${e.title}</h1>
            <h1>id:${e.price}</h1>
            `
        })
        
    }
    catch(error){
        console.log(error)
    }
}
async function addProducts() {
    const title = document.getElementById("title").value
    const price= document.getElementById("price").value
    try {
        await fetch(baseurl, {
            method:"POST",
            headers:{
                "Content-Type":"application/json"
            },
            body:JSON.stringify({title,price})

        })
        
    } catch (error) {
        console.log(error)
    }
    
}
    // getBtn.onclick = getAllProducts;
async function  updateData() {
    const id = document.getElementById("uid").value
    const title = document.getElementById("utitle").value
    const price = document.getElementById("uprice").value
    
          try {
        await fetch(`${baseurl}/${id}`, {
            method:"PUT",
            headers:{
                "Content-Type":"application/json"
            },
            body:JSON.stringify({title,price})
        
        })
        getAllProducts()
        
    } catch (error) {
        console.log("updaterror",error)
    }

}
