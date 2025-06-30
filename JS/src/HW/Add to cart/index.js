import products from "./product.js";
import cart from "./cart.js";
let totalAmount = 0;
const productContainerElement = document.getElementById('products');
const cartContainerElement = document.getElementById('cart')

function loadItems() {
productContainerElement.innerHTML = products.map((e,i)=>{
    return ` <div class="pcards">
    <img class="pimg" src="${e.pImage}" alt="${e.paname}">
        <span class="pname">${e.pName.toUpperCase()}</span>
        <span class="pprice"><strong class="black" >Price: </strong> ${e.price} <img class="gold" src="./images/—Pngtree—cartoon gold coin png download_7581035.png"/> </span>
        
        <span class="pstock"><strong>Qty: </strong>${e.pStock}</span>
        
        <button id="p-${e.pId}" class="add-to-cart-btns" data-product-id="${i}" > Add to cart </button>
    </div>   
    `
}).join(" ")
}
loadItems();

function loadCartItem(){
    cartContainerElement.innerHTML = cart.map((e,i)=>{
    return ` <div class="cart-cards">
    <img class="pimg" src="${e.pImage}" alt="${e.paname}">
        <span class="pname">${e.pName.toUpperCase()}</span>
        <span class="pprice"><strong class="black" >Price: </strong> ${e.price} <img class="gold" src="./images/—Pngtree—cartoon gold coin png download_7581035.png"/> </span>
        <button class="remove-cart" data-cart-product-id = ${e.pId}  data-cart-item-id="${i}"> Remove </button>
    </div>
    
    `
}).join(" ")
}
const showTotal = document.getElementById("show-total")
const addToCart = (index)=>{
    products[index].pStock--;
    totalAmount += products[index].price;
    showTotal.textContent = totalAmount
    cart.push(products[index]);
    const cartItemIndex=cart.length-1
    loadCartItem();
    loadItems();
}
let cartIsVisible = false;
const showCartBtn = document.getElementById('show-cart')
showCartBtn.onclick = ()=>{
    if(cartIsVisible) {
        cartIsVisible = !cartIsVisible;
        showCartBtn.textContent = "Show"
        cartContainerElement.style.display="none"
    }
    else{
       cartIsVisible = !cartIsVisible;
        showCartBtn.textContent = "Hide"
        cartContainerElement.style.display="grid"
    }
}

productContainerElement.addEventListener("click",(event)=>{
    // console.log("target ",event.target)
    // console.log("currentTarget ",event.currentTarget)
    if(event.target===event.currentTarget) return;
    const button = event.target;
    const index = (button.dataset.productId);
    addToCart(index)
   
})

cartContainerElement.addEventListener("click",(event)=>{
    console.log("cart -target ",event.target)
    console.log("cart- currentTarget ",event.currentTarget)
    if(!event.target.classList.contains('remove-cart')) return;
    const button = event.target;
    const productItemIndex = (button.dataset.cartProductId);
    const cartItemIndex = (button.dataset.cartItemId);
    // console.log("index",index)
    removeItem(cartItemIndex,productItemIndex)
    console.log("target ",event.currentTarget)


})


function removeItem(cartIndex, productIndex){
    products[productIndex-1].pStock++;
    totalAmount -= products[productIndex-1].price;
    showTotal.textContent = totalAmount
    cart.splice(cartIndex,1);
    loadCartItem();
    loadItems();
}