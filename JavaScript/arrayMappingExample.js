let animals = ['Hen', 'elephant', 'llama', 'leopard', 'ostrich', 'Whale', 'octopus', 'rabbit', 'lion', 'dog'];

// Create the secretMessage array below
let secretMessage = animals.map(function(words){
  return words[0];
});

let secretMessage = animals.map(words => words[0]);

console.log(secretMessage.join(''));

let bigNumbers = [100, 200, 300, 400, 500];

// Create the smallNumbers array below
let smallNumbers = bigNumbers.map(num => num/100);