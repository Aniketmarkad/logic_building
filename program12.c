#include<stdio.h>

// Iteration 

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("%d\n",iCnt);
    }        
}

int main()
{
    Display();

    return 0;
}