#include<stdio.h>

// Input : 9875
// Output : 9+8+7+5 = 29    - > 2 + 9 = 11 -> 1 + 1 = 2

// Input : 21
// Output : 3

// Input : 7
// Output : 7

// Input : 9875
// Output : 5 + 7 + 8 + 9 = 29    
//          9 + 2 = 11 
//          1 + 1 = 2
//          2

int GenericRoot(int iNo)
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

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = GenericRoot(iValue);

    printf("Generic Root of %d is %d\n",iValue, iRet);

    return 0;
}