const plusBtn=document.querySelector('#plus');
const minusBtn=document.querySelector('#minus');
const value=document.querySelector('p');
const save=document.querySelector('#save');

var count=0;

plusBtn.addEventListener('click',()=>{
    count++;
    value.textContent=count;
});
minusBtn.addEventListener('click',()=>{
    count--;
    value.textContent=count;
});
save.addEventListener('click',()=>{
    localStorage.setItem('score',value.textContent);
});
