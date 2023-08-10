function simpleInterestCalc(){
    let p = prompt("Enter the principal amount ");
    let r = prompt("Enter the rate of interest");
    let t = prompt(" Enter the time");
    let SI = (p*r*t)/100;
    console.log(SI); 
}

simpleInterestCalc();
