//require() function imports a module
//enables a module to load by passing in the module's filpath as a parameter

const Airplane = require('./1-airplane.js');

function displayAirplane() { 
  console.log(Airplane.myAirplane);
}

displayAirplane();