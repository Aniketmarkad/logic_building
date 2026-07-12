#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Number in Decimal format : %d\n",iValue);
    printf("Number in Octal format : %o\n",iValue);
    printf("Number in Hexadecimal format : %x\n",iValue);
    
    return 0;
}