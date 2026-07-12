#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 3)
    {
        printf("Jay Ganesh... : %d \n",i);
        i++;
        Display();
    }
}

int main()
{
    Display();
    printf("End of main\n");
    return 0;
}