//1
let age = parseInt(prompt('Enter age: '))
if(age > 18)
{
    console.log('Old enough to drive')
}
else
{
    console.log('Not old enough')
    console.log(`You are ${18-age} years away`)
}
//2

//3
let a = 4
let b = 5
if(a > b)
{
    console.log(`${a} is greater than ${b}`)
}
else
{
    console.log(`${b} is greater than ${a}`)
}

(a > b) ? console.log(`${a} is greater than ${b}`) : console.log(`${b} is greater than ${a}`)

//4
let num = parseInt(prompt('Enter a number: '))
if(num % 2 === 0)
{
    console.log(`${num} is even`)
}
else
{
    console.log('Not even')
}