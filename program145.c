#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter character : \n");
    scanf("%c",&ch);

    printf("ASCII value of %c is %d\n",ch,ch);

    return 0;
}