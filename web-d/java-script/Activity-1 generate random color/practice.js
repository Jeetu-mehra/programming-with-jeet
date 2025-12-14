let btn = document.querySelector("button");

btn.addEventListener("click",function(){
    let h2=document.querySelector("h2");
    let rc=getrandomcolor();
    h2.innerText=rc;

    let div=document.querySelector("div");
    div.style.backgroundColor=rc;

})

function getrandomcolor(){
    let red = Math.floor(Math.random() * 255);
    let green = Math.floor(Math.random() * 255);
    let blue = Math.floor(Math.random() * 255);

    let colour = `rgb(${red},${green},${blue})`;
    return(colour)
}