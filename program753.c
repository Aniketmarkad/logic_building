#include<stdio.h>
#include<stdbool.h>

// Input : 19
// Output : 1 + 9   -> 10 -> 1 + 0 -> 1
//          true

bool CheckMagic(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    iSum = iNo;

    while(iSum > 9)
    {
        iNo = iSum;

        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
    }

    return (iSum == 1);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the end point of the range : \n");
    scanf("%d",&iValue);

    bRet = CheckMagic(iValue);
   
    if(bRet)
    {
        printf("%d is Magic number\n",iValue);
    }
    else
    {
        printf("%d is not a Magic number\n",iValue);
    }
    return 0;
}