//adding 100 para
for (let i = 0; i < 100; i++) {
  let newElement = document.createElement("p");
  newElement.textContent = "This is a para" + i;
  document.body.appendChild(newElement);
}
//optimising a bit
let myDiv=document.createElement('div');
for (let i = 0; i < 100; i++) {
    let element=document.createElement('p');
    element.textContent="This is para"+i;
    myDiv.appendChild(element);
}
document.body.appendChild(myDiv);