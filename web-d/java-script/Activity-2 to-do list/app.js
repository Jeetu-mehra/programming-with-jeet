let btn=document.querySelector("button");
let inp=document.querySelector("input");
let ul=document.querySelector("ul");


btn.addEventListener("click",function(){
    let item=document.createElement("li");
    item.textContent=inp.value;
    ul.appendChild(item);
    inp.value="";

    let delbtn=document.createElement("button");
    delbtn.innerText="Delete";
    delbtn.classList.add("deletebutton");
    item.append(delbtn);
})

ul.addEventListener("click",function(event){
    if(event.target.nodeName=="BUTTON"){
        let listitem = event.target.parentElement;
        listitem.remove();
    }
})



// let delbtns=document.querySelectorAll(".deletebutton");

// for(delbtn of delbtns){
//     delbtn.addEventListener("click", function(){
//         let par=this.parentElement;
//         par.remove();
//     })
// }


