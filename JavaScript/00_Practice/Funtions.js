
reverseArray = Arr => {
    let len = Arr.length
    let i = 0
    let revArr = Array()
    while(i<len)
    {
        revArr[i] = Arr[len-1-i]
        i++
    }
    return(revArr)
}
console.log(reverseArray([1,2,3,4,5]))