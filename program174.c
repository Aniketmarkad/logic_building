#include<stdio.h>

void CountCapitalSmallDigit(char *str)
{
    int iCountCap = 0, iCountSmall = 0, iCountDigit = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iCountDigit++;
        }
        str++;
    }
    printf("Number of capital characters are : %d\n",iCountCap);
    printf("Number of small characters are : %d\n",iCountSmall);
    printf("Number of digits are : %d\n",iCountDigit);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmallDigit(Arr);
    
    return 0;
}