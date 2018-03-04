//prompts the user to enter a temperature in kelvin
const kelvin = prompt('What is the Kelvin temperature today?') 
const celsius = kelvin - 273; //this is the celsius value of kelvin
//the let keyword allows us to change the value
let fahrenheit = celsius * (9/5)+32;
//no need to use the let keyword to redeclare fahrenheit
//rounding the fahrenheit temperature
fahrenheit = Math.floor(fahrenheit);

console.log('The temperature is ' + fahrenheit + ' degrees fahrenheit');