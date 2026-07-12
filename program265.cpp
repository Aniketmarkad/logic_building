#include<iostream>
using namespace std;

int CountZero(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 0)
        {
            iCount++;
        }
        iNo = iNo / 2;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = CountZero(iValue);

    cout<<"Number of 0 : "<<iRet<<"\n";
    
    return 0;
}