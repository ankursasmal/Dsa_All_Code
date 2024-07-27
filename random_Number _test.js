const a = Math.floor(Math.random() * (100 - 1)) + 1; //change in 10 then randomness range increase
console.log(`Random value between 1 and 10 is ${a}`);
let d;
let c=0;
do{
  d=prompt("enter guss value");
  d=Number.parseInt(d);
  if(d>a){
    alert("enter smaller val");
    c++;
  }
   else if(d<a){
    alert("enter greater value");
c++;
  } 
else{
  alert("congargulation");
  c++;
}
}
while(d!=a);
console.log(c);
