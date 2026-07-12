function CheckPerfect(No)
{
    let iSum = 0

    for(let i = 1; i<= (No/2); i++)
    {
        if(No % i == 0)
        {
            iSum = iSum + i
        }
    }

    return (iSum == No)
}

let Value = 28
let bRet = false

bRet = CheckPerfect(Value)

if(bRet == true)
{
    console.log(Value+" is a perfect number")
}
else
{
    console.log(Value+" is not a perfect number")
}