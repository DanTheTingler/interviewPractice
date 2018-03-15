let person = {
  name: 'Daniel',
  age: 23,
  weekendAlarm: 'No alarms needed',
  weekAlarm: 'Alarm set to 7AM',
  sayHello: function() {
    return 'Hello, my name is ' + this.name;
  },
  //ES6 method syntax
  sayGoodbye() {
    return 'Goodbye!';
  }
};

//Adding keys to our objects after creation:
person.hobbies = ['Basketball', 'Streetwear', 'Sneakers'];
person.hobbies = ['Basketball'];
console.log(person.hobbies);
console.log(person.sayHello());

//console.log(person.name);
//console.log(person.age);

//Bracket notation to access key's values
//console.log(person['name']);
//console.log(person['age']);

let day = 'Wednesday';
let alarm;

if(day === 'Saturday' || day === 'Sunday'){
  alarm = 'weekendAlarm';
} else{
  alarm = 'weekAlarm';
}

console.log(person[alarm]);