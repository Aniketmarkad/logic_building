#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    private:                
        T *Arr;
        int iSize;

    public:
        ArrayX(int iLength = 5)
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new T[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of the array are : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        T Maximum()
        {
            T iMax = 0.0f;
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
};

int main()
{
    ArrayX <int>aobj1(5);

    aobj1.Accept();
    aobj1.Display();
    
    int iRet = 0;
    iRet = aobj1.Maximum();

    cout<<"Maximum is : "<<iRet<<"\n";
    
    ////////////////////////////////////////////////////////////

    ArrayX <double>aobj2(5);

    aobj2.Accept();
    aobj2.Display();
    
    double dRet = 0.0;
    dRet = aobj2.Maximum();

    cout<<"Maximum is : "<<dRet<<"\n";
    
    return 0;
}