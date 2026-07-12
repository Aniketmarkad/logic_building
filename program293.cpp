#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int a = 10, b = 11, Ret = 0;

    Ret = Addition(a,b);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}