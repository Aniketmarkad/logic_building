#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int a = 10, b = 11, Ret = 0;
    Ret = Addition(a,b);
    cout<<"Addition is : "<<Ret<<"\n";

    double x = 10.90, y = 11.70, Ret2 = 0.0;
    Ret2 = Addition(x,y);
    cout<<"Addition is : "<<Ret2<<"\n";
    
    return 0;
}