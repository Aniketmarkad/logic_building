// Input : 4
// Output : -4  -3  -2  -1  0   1   2   3   4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    } 
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)     // 2N
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexity O(2N)
// N is a natural number
// Where N >= 0 and N <= Inifinity