function outer()
{
    let count = 0;
    function inner()
    {
        count++
        return count
    }
    return inner
}
const val = outer()
console.log(val())