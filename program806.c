#include<stdio.h>

void Encrypt(char *str, char key)
{
    while (*str != '\0')
    {
        *str = *str ^ key;
        str++;
    }
}

void Decrypt(char *str, char key)
{
    while (*str != '\0')
    {
        *str = *str ^ key;
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    int i = 0;

    printf("Enter the data : \n");
    scanf("%[^'\n']s",Arr);

    printf("Original data in ASCII : \n");
    while(Arr[i] != '\0')
    {
        printf("%d\t",Arr[i]);
        i++;
    }

    Encrypt(Arr,'a');

    printf("\nEncypted data in ASCII : \n");
    i = 0;
    while(Arr[i] != '\0')
    {
        printf("%d\t",Arr[i]);
        i++;
    }    

    Decrypt(Arr,'a');

    printf("\nDecrypted data in ASCII : \n");
    i = 0;
    while(Arr[i] != '\0')
    {
        printf("%d\t",Arr[i]);
        i++;
    }    
    
    return 0;
}