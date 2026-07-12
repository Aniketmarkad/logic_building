// Input : InDiA
// Output : I$D$A

#include<stdio.h>

void Change(char *str)
{    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Change(Arr);

    printf("Updated string : %s\n",Arr);
    
    return 0;
}