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

void CheckStrongRange(int iEnd)
{
    int i = 0;

    for(i = 1; i <= iEnd;i++)
    {
        if(CheckStrong(i))
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the end point of the range : \n");
    scanf("%d",&iValue);

    CheckStrongRange(iValue);
   
    return 0;
}