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

    printf("Enter the data : \n");
    scanf("%[^'\n']s",Arr);

    Encrypt(Arr,'a');

    printf("Encrypted data : %s\n",Arr);
    
    Decrypt(Arr,'a');

    printf("Decrypted data is : %s\n",Arr);
    
    return 0;
}