#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    T iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    float *ptr = NULL;
    int iLength = 0, iCnt = 0;
    float iRet = 0.0f;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    iRet = Maximum(ptr,iLength);

    cout<<"Maximum element is : "<<iRet<<"\n";

    delete []ptr;
    
    return 0;
}