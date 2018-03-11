let cards = ['Diamond', 'Spade', 'Heart', 'Club'];

var currentCard = 'Heart';

while(currentCard !== 'Spade'){
  console.log(currentCard)
  //generates a random number between 0 - 3
  currentCard = cards[Math.floor(Math.random() *4)];
}

console.log('Found a Spade!');