#include<stdio.h>
#include<stdbool.h>

// Input : 135
// Output : 1^1 + 3^2 + 5^3
//          1 + 9 + 125
//          135
//          true

int Power(int A, int B) // A^B
{
    int Result = 1;
    int i = 0;

    for(i = 1; i <= B; i++)
    {
        Result = Result * A;
    }

    return Result;
}

int CountDigits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

bool CheckDisarium(int iNo)
{
    int iSum = 0, iTemp = iNo;
    int iCount = 0, iDigit = 0;

    iCount = CountDigits(iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit, iCount);
        iCount--;
        iNo = iNo / 10;
    }

    return (iTemp == iSum);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the end point of the range : \n");
    scanf("%d",&iValue);

    bRet = CheckDisarium(iValue);
   
    if(bRet)
    {
        printf("%d is Disarium number\n",iValue);
    }
    else
    {
        printf("%d is not a Disarium number\n",iValue);
    }
    
    return 0;
}