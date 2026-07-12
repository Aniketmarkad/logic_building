// Input : InDiA
// Output : INDIA

#include<stdio.h>

void strlwrX(char *str)
{    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string : %s\n",Arr);
    
    return 0;
}