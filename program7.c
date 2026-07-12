/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/

#include<stdio.h>

# define ERR_INVALID_AGE -1

int CalculateTicket(int iAge)
{
    if(iAge < 0)
    {
        return ERR_INVALID_AGE;
    }

    if((iAge >= 0) && (iAge <= 5))
    {
        return 0;
    }
    else if((iAge > 5) && (iAge <= 18))
    {
        return 700;
    }
    else if((iAge > 18) && (iAge <= 50))
    {
        return 999;
    }
    else if(iAge > 50)
    {
        return 500;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter your age : \n");
    scanf("%d",&iValue);

    iRet = CalculateTicket(iValue);

    printf("Your ticket price is : %d\n",iRet);

    return 0;
}

