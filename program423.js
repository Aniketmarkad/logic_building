function CountDigits(No)
{
    let iCount = 0
    
    while(No != 0)
    {
        No = Math.floor(No / 10)
        console.log(No)
        iCount++
    }
    return iCount
}

let Value = 123
let iRet = 0

iRet = CountDigits(Value)

console.log("Number of digits are : "+iRet)