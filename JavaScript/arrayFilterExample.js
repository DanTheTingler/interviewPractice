let randomNumbers = [375, 200, 3.14, 7, 13, 852];

// Call .filter() on randomNumbers below
let smallNumbers = randomNumbers.filter(nums => nums < 250);

let favoriteWords = ['nostalgia', 'hyperbole', 'fervent', 'esoteric', 'serene'];

//let longFavoriteWords = favoriteWords.filter(function(word) {
  //return word.length > 7;
//});

let longFavoriteWords = favoriteWords.filter(word => word.length > 7);

// Refactor the code above using arrow function syntax
