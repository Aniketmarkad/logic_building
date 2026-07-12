#include<stdio.h>

void Encrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str + 1;
        str++;
    }
}

void Decrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str - 1;
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the data : \n");
    scanf("%[^'\n']s",Arr);

    Encrypt(Arr);

    printf("Encrypted data : %s\n",Arr);
    
    Decrypt(Arr);

    printf("Decrypted data is : %s\n",Arr);
    
    return 0;
}