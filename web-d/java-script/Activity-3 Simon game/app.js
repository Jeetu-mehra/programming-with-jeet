let gameseq=[];
let userseq=[];

let colors=["red","green","yellow","purple"];
let h2=document.querySelector("h2");
let started=false;
let level=0;

document.addEventListener("keypress",function(){
    if(started==false){
        console.log("start game");
        started=true;

        levelUp();
    }
})

function flashbtn(btn){
    btn.classList.add("flash");
    setTimeout(function(){
        btn.classList.remove("flash");
    },250);
}
function flashuserbtn(btn){
    btn.classList.add("userflash");
    setTimeout(function(){
        btn.classList.remove("userflash");
    },250);
}

function levelUp(){
    level++;
    userseq=[];
    h2.innerText=`Level - ${level}`;

    let rndIdx=Math.floor(Math.random()*4);
    let rndClr=colors[rndIdx];
    let rndBtn=document.querySelector(`.${rndClr}`);
    gameseq.push(rndClr);
    console.log(gameseq);
    flashbtn(rndBtn);
}

function btnpress(){
    flashuserbtn(this);

    userColor = this.getAttribute("id");
    userseq.push(userColor);

    checkAns(userseq.length-1);
}

function checkAns(idx){
    if(userseq[idx]===gameseq[idx]){
        if(userseq.length==gameseq.length){
            setTimeout(levelUp,1000);
        }
    }
    else{
        h2.innerHTML=`Game Over!! Your Score was <b>${level}</b> <br> Press Any Key To Start!!`;
        let body=document.querySelector("body");
        body.style.backgroundColor="red";
        setTimeout(function(){
            body.style.backgroundColor="white";
        },150);
        reset();
    }

}

let allbtns=document.querySelectorAll(".btn")
for(btn of allbtns){
    btn.addEventListener("click",btnpress);
}

function reset(){
    level=0;
    started=false;
    userseq=[];
    gameseq=[];
}