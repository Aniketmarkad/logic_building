#include<stdio.h>

void DisplayFactorsNonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("Factor is %d\n",iCnt);
        }
        else
        {
            printf("Non Factor is %d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactorsNonFactors(iValue);

    return 0;
}