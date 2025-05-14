let Arr = [];
let A
for(let i=1; i<=10; i++)
{
    Arr.push(i)
    A = new Set(Arr)
}
console.log(A)
A.delete(1)
console.log(A)
A.clear()
console.log(A)