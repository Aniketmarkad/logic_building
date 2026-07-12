#include<stdio.h>
#include<stdbool.h>

// Input : 145
// Output : 5! + 4! + 1!
//          120 + 24 + 1
//          145
//          true

bool CheckStrong(int iNo)
{
    int iDigit = 0;
    int iTemp = iNo;
    int iSum = 0;

    int Factorial[10] = {1,1,2,6,24,120,720,5040,40320,362880};

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Factorial[iDigit]; 
        iNo = iNo / 10;
    }

    return (iSum == iTemp);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckStrong(iValue);

    if(bRet == true)
    {
        printf("%d is strong number\n",iValue);
    }
    else
    {
        printf("%d is not a strong number\n",iValue);
    }

    return 0;
}