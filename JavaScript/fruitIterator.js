let fruits = ['mango', 'papaya', 'pineapple', 'apple'];

// Iterate over fruits below

//Regular function syntax
fruits.forEach(function(individualFruit){
   console.log('I want to eat a ' + individualFruit) 
});


//Arrow syntax
fruits.forEach(individualFruit => console.log('I want to eat a ' + individualFruit));