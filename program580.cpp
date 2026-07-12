#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter "<<iSize<<" elements : \n";
            
            int i =0;

            for(i = 0; i < iSize;i++)
            {
                cout<<"Enter the element no : "<<i+1<<"\n";

                cin>>Arr[i];
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

        bool LinearSearch(int no)       // N
        {
            int i = 0;
            bool bFlag = false;

            for(i = 0; i < iSize; i++)
            {
                if(Arr[i] == no)
                {
                    bFlag = true;
                    break;
                }
            }

            return bFlag;
        }

        bool BiDirectionalSearch(int no)    // N/2
        {
            int iStrat = 0;
            int iEnd = 0;

            bool bFlag = false;

            for(iStrat = 0, iEnd = iSize-1 ; iStrat <= iEnd; iStrat++, iEnd--)
            {
                if(Arr[iStrat] == no || Arr[iEnd] == no)
                {
                    bFlag = true;
                    break;
                }
            }

            return bFlag;
        }

        bool BinarySearchInc(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;


            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no)
                {
                    bFlag = true;
                    break;
                }
                else if(no < Arr[iMid])     // First half (Left window)
                {
                    iEnd = iMid - 1;
                }
                else if(no > Arr[iMid])     // Second half (Right window)
                {
                    iStart = iMid + 1;
                }
            }   // End of while

            return bFlag;
        }

        bool BinarySearchDec(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;


            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if(Arr[iMid] == no)
                {
                    bFlag = true;
                    break;
                }
                else if(no > Arr[iMid])     // First half (Left window)
                {
                    iEnd = iMid - 1;
                }
                else if(no < Arr[iMid])     // Second half (Right window)
                {
                    iStart = iMid + 1;
                }
            }   // End of while

            return bFlag;
        }

        bool BinarySearchEfficientInc(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;


            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if((Arr[iMid] == no) || (Arr[iStart] == no) || (Arr[iEnd] == no))    //Change
                {
                    bFlag = true;
                    break;
                }
                else if(no < Arr[iMid])     // First half (Left window)
                {
                    iEnd = iMid - 1;
                }
                else if(no > Arr[iMid])     // Second half (Right window)
                {
                    iStart = iMid + 1;
                }
            }   // End of while

            return bFlag;
        }

        bool BinarySearchEfficientDec(int no)
        {
            int iStart = 0, iEnd = 0, iMid = 0;
            bool bFlag = false;


            iStart = 0;
            iEnd = iSize - 1;

            while(iStart <= iEnd)
            {
                iMid = iStart + ((iEnd - iStart) / 2);

                if((Arr[iMid] == no) || (Arr[iStart] == no) || (Arr[iEnd] == no))    //Change
                {
                    bFlag = true;
                    break;
                }
                else if(no > Arr[iMid])     // First half (Left window)
                {
                    iEnd = iMid - 1;
                }
                else if(no < Arr[iMid])     // Second half (Right window)
                {
                    iStart = iMid + 1;
                }
            }   // End of while

            return bFlag;
        }

        bool CheckSortedInc()
        {
            bool bFlag = true;
            int i = 0;

            for(i = 0; i < iSize - 1; i++)
            {
                if(Arr[i] <= Arr[i+1])
                {
                    continue;
                }
                else
                {
                    bFlag = false;
                    break;
                }
            }

            return bFlag;
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

    //cout<<"Enter the value that you want to search : \n";
    //cin>>iValue;

    bRet = aobj->CheckSortedInc();

    if(bRet == true)
    {
        cout<<"Data is sorted in increasing order\n";
    }
    else 
    {
        cout<<"Data is not sorted in increasing order\n";
    }

    delete aobj;
    
    return 0;
}