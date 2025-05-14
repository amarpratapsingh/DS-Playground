const para = document.querySelector('p')
console.log(para)
for(let i= 0; i<para.length;i++)
{
    console.log(para[i])
}
let first = document.querySelector('first-para')
let second =document.querySelector('second-para')
let third = document.querySelector('third-para')
let fourth = document.querySelector('fourth-para')
console.log(first)
console.log(second)
console.log(third)
console.log(fourth)

let node = document.querySelectorAll('p')
console.log(node)
for(let i=0; i<node.length; i++)
{
    console.log(node[i])
}

const text = document.querySelectorAll('p')
text[3].textContent = 'Fourth Paragraph'

const val = document.querySelectorAll('p')
for(let i=0; i<val.length; i++)
{
   val[i].className = 'para'
}