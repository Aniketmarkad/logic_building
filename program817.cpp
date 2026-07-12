// Generic implementation of Stack

#include<iostream>
using namespace std;

template<class T>
struct Stacknode
{
    T data;
    struct Stacknode<T> *next;
};

template<class T>
class StackX
{
    private:
        struct Stacknode<T> *first;
        int iCount;

    public:
        StackX();
        void Push(T);
        T Pop();
        void Display();
        int Count();
};

template<class T>
StackX<T> :: StackX()
{
    first = NULL;
    iCount = 0;
}

template<class T>
void StackX<T> :: Push(T no) // InsertFirst
{
    struct Stacknode<T> * newn = NULL;

    newn = new Stacknode<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    iCount++;
}

template<class T>
T StackX<T> :: Pop()         // DeleteFirst
{
    struct Stacknode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to pop as stack is empty\n";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp->data;

        first = first -> next;
        delete temp;

        iCount--;

        return value;
    }
}

template<class T>
void StackX<T> :: Display()
{
    struct Stacknode<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
int StackX<T> :: Count()
{
    return iCount;
}

int main()
{
    StackX<double> * sobj = new StackX<double>();
    double iRet = 0.0;

    sobj->Push(51.23);
    sobj->Push(21.54);    
    sobj->Push(11.89);

    sobj->Display();
    iRet = sobj->Count();

    cout<<"Number of elements from the stack : "<<iRet<<"\n";

    iRet = sobj->Pop();
    cout<<"Poped element is : "<<iRet<<"\n";

    iRet = sobj->Pop();
    cout<<"Poped element is : "<<iRet<<"\n";
    
    sobj->Display();
    iRet = sobj->Count();

    cout<<"Number of elements from the stack : "<<iRet<<"\n";

    delete sobj;
    
    return 0;
}