#include<stdio.h>

void Display()
{
    static int i = 0;

    printf("Jay Ganesh... : %d \n",i);

    i++;
    
    Display();
}

int main()
{
    Display();

    return 0;
}