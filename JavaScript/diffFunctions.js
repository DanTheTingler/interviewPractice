const isGreaterThan = (numberOne, numberTwo) => {
  if(numberOne > numberTwo){
    return true;
  }
  else{
    return false;
  }
};

function isGreaterThan(numberOne, numberTwo){
  if(numberOne > numberTwo){
    return true;
  }
  else{
    return false;
  }
}

//refactor arrow function
//takes in a single parameter: diameter
//returns the volume of a sphere - note how there's no return statement
const volumeOfSphere = diameter => (1/6) * Math.PI * diameter * diameter * diameter;