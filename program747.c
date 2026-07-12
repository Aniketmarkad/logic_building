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
    int iSum = 0, iFact = 0, i = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
     
        iFact = 1;
        for(i = 1; i<= iDigit; i++)
        {
            iFact = iFact * i;
        }
        iSum = iSum + iFact; 
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }

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