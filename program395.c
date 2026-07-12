#include<stdio.h>

void Display()
{
    int i = 0;

    printf("Jay Ganesh... : %d \n",i);

    i++;
    
    Display();
}

int main()
{
    Display();

    return 0;
}