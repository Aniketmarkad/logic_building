#include<stdio.h>
#include<stdbool.h>

// Input : 18
// Output 18 -> 1 + 8 -> 9
//        (18 % 9) == 0
//        true

bool CheckNiven(int iNo)
{
    int iSum = 0, iTemp = iNo, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return (iTemp % iSum == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the end point of the range : \n");
    scanf("%d",&iValue);

    bRet = CheckNiven(iValue);
   
    if(bRet)
    {
        printf("%d is Niven number\n",iValue);
    }
    else
    {
        printf("%d is not a Niven number\n",iValue);
    }
    return 0;
}