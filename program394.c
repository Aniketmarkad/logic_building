#include<stdio.h>

void Display()
{
    int i = 0;

    printf("Jay Ganesh...\n");

    Display();
}

int main()
{
    Display();

    return 0;
}