#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float Ret, Value1, Value2;

    cout<<"Enter first number : \n";
    cin>>Value1;

    cout<<"Enter second number : \n";
    cin>>Value2;
    
    Ret = Addition(Value1,Value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}