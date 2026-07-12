#include<iostream>
using namespace std;

template <class T>
void Swap(T &No1, T &No2)
{
    T temp = 0;

    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int a = 10, b = 11;

    cout<<"Value of a before swap : "<<a<<"\n";
    cout<<"Value of b before swap : "<<b<<"\n";
    Swap(a,b);
    cout<<"Value of a after swap : "<<a<<"\n";
    cout<<"Value of b after swap : "<<b<<"\n";
    
    char x = 'A', y = 'B';
    cout<<"Value of x before swap : "<<x<<"\n";
    cout<<"Value of y before swap : "<<y<<"\n";
    Swap(x,y);
    cout<<"Value of x after swap : "<<x<<"\n";
    cout<<"Value of y after swap : "<<y<<"\n";

    return 0;
}