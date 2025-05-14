//1
let Challenge = '30 days of JavaScript'
//2
console.log(Challenge)
//3
console.log(Challenge.length)
//4
console.log(Challenge.toUpperCase())
//5
console.log(Challenge.toLowerCase())
//6
console.log(Challenge.substring(3,21))
//7
console.log(Challenge.slice(3,21))
//8
console.log(Challenge.includes('Script'))
//9
console.log(Challenge.split())
//10
console.log(Challenge.split(' '))
//11
let str = 'Facebook, Google, Microsoft, Apple, IBM, Oracle, Amazon'
console.log(str.split())
console.log(str.split(','))
//12
console.log(Challenge.replace('JavaScript','Python'))
//13
console.log(Challenge.charAt(15))
//14
console.log(Challenge.charCodeAt('J'))
//15
console.log(Challenge.indexOf('a'))
//16
console.log(Challenge.lastIndexOf('a'))
//17
let sen = 'You cannot end a sentence with because because because is a conjunction'
console.log(sen.indexOf('because'))
//18
console.log(sen.lastIndexOf('because'))
//19
console.log(sen.search('because'))
//20
console.log(Challenge.trim())
//21
console.log(Challenge.startsWith(Challenge))
//22
console.log(Challenge.endsWith(Challenge))
//23 - important
console.log(Challenge.match(/a/g))
//24
let string = '30 Days of'
console.log(string.concat(' JavaScript'))
//25
console.log(Challenge.repeat(2))