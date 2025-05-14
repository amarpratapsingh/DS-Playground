console.log('%cJavaScript','color:yellow')

console.warn('warn')

console.error('error')

let names = ['Amar','Aashish','BB','Aditya','Mohan','Deepak']
console.table(names)
const user = {
    name: 'Amar',
    age: 20,
    DOB: '15/09/2004'
}
console.table(user)

const countries = [
  ['Finland', 'Helsinki'],
  ['Sweden', 'Stockholm'],
  ['Norway', 'Oslo']
]

console.time('Regular for loop')
for (let i = 0; i < countries.length; i++) {
  console.log(countries[i][0], countries[i][1])
}
console.timeEnd('Regular for loop')

console.info("Hello World!")

console.assert(3>4, '3 is not greater than 4')

const companies = ['Apple','Google','Meta','Netflix','Twitter']
console.group('Companies')
console.log(companies)
console.groupEnd()