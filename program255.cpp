#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    cout<<Maximum(14,18,11)<<"\n";
    cout<<Maximum(21,18,27)<<"\n";
    cout<<Maximum(21.89,18.90,27.45)<<"\n";
    
    return 0;
}