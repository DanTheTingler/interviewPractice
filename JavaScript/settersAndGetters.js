let person = {
  _name: 'Lu Xun',
  _age: 137,

  set age(ageToSet) {
   if(typeof ageToSet === 'number'){
      this._age = ageToSet;
    }
    
    else{
      return 'Invalid input';
    }
   },
  
  get age() {
   console.log(this._name + 'is ' + this._age + ' years old.');
    return this._age;
   }
};

person.age = 'Thirty-nine';
person.age = 39;

console.log(person.age);
