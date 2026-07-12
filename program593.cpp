#include<iostream>
using namespace std;

class ArrayX        // Increasing
{
    public:
        int *Arr;
        int iSize;
        bool Sorted;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
            Sorted = true;
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter "<<iSize<<" elements : \n";
            
            int i =0;                   // 11       

            for(i = 0; i < iSize;i++)
            {
                cout<<"Enter the element no : "<<i+1<<"\n";
                cin>>Arr[i];

                if((i > 0) && (Sorted == true))     // IMP
                {
                    if(Arr[i] < Arr[i-1])
                    {
                        Sorted = false;
                    }
                }
            }
        }

        void Display()
        {
            cout<<"Elements of the array are : \n";
            
            int i = 0;

            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\t";
            }
            cout<<"\n";
        }

        void BubbleSort()
        {
            int i = 0, j = 0, temp = 0;

            if(Sorted == true)
            {
                return;
            }
            
            for(i = 0; i < iSize ; i++)         // Outer loop
            {
                for(j = 0; j < iSize - 1; j++)      // Inner loop
                {
                    if(Arr[j] > Arr[j + 1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j + 1];
                        Arr[j + 1] = temp;
                    }
                }

                cout<<"Data after Pass : "<<i+1<<"\n";

                Display();
            }
        }

        void BubbleSortEfficient()
        {
            int i = 0, j = 0, temp = 0;
            bool bFlag = true;

            if(Sorted == true)
            {
                return;
            }
            
            for(i = 0; (i < iSize && bFlag == true) ; i++)         // Outer loop
            {
                bFlag = false;

                for(j = 0; j < iSize - 1 - i; j++)      // Inner loop
                {
                    if(Arr[j] > Arr[j + 1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j + 1];
                        Arr[j + 1] = temp;

                        bFlag = true;
                    }
                }

                cout<<"Data after Pass : "<<i+1<<"\n";

                Display();
            }
        }

        void SelectionSort()
        {
            int i = 0, j = 0, min_index = 0, temp = 0;

            for(i = 0 ; i < iSize-1; i++)
            {
                min_index = i;

                for(j = i + 1; j < iSize; j++)
                {
                    if(Arr[j] < Arr[min_index])
                    {
                        min_index = j;
                    }
                }

                temp = Arr[i];
                Arr[i] = Arr[min_index];
                Arr[min_index] = temp;
            }
        }
};

int main()
{
    int iLength = 0;
    int iValue = 0;

    bool bRet = false;

    cout<<"Enter the size of array : \n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();

    aobj->Display();

    aobj->SelectionSort();

    cout<<"Data after sorting : \n";

    aobj->Display();
   
    delete aobj;
    
    return 0;
}