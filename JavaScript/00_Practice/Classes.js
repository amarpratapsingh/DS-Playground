class Animal
{
    constructor(name, age, color, legs)
    {
        this.name = name;
        this.age = age;
        this.color = color;
        this.legs = legs;
    }
    animalSounds()
    {
        console.log('Animal sound')
    }
}
let aname = 'Bruno'
let age = 10
let color = 'black'
let legs = 4
let breed = new Animal(aname, age, color, legs)

console.log(breed)
console.log(breed.animalSounds())
class Dog extends Animal
{
    constructor()
    {
        
    }
}