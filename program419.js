function Maximum(Brr)
{
    let iMax = Brr[0]

    for(let i =0; i < Brr.length; i++)
    {
        if(Brr[i] > iMax)
        {
            iMax = Brr[i]
        }
    }
    return iMax
}

Arr = [78,45,90,32,66,43]
let iRet = 0
iRet = Maximum(Arr)

console.log("Maximum element is : "+iRet)
