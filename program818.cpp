// Generic implementation of Queue

#include<iostream>
using namespace std;

template <class T>
struct Queuenode
{
    T data;
    struct Queuenode<T> *next;
};

template <class T>
class QueueX
{
    private:
        struct Queuenode<T> *first;
        int iCount;

    public:
        QueueX();
        void Enqueue(T);
        T Dequeue();
        void Display();
        int Count();
};

template <class T>
QueueX<T> :: QueueX()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void QueueX<T> :: Enqueue(T no) // InsertLast
{
    struct Queuenode<T> *temp = NULL;
    struct Queuenode<T> * newn = NULL;

    newn = new Queuenode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }

    iCount++;
}

template <class T>
T QueueX<T> :: Dequeue()         // DeleteFirst
{
    struct Queuenode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to remove as queue is empty\n";
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

template <class T>
void QueueX<T> :: Display()
{
    struct Queuenode<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int QueueX<T> :: Count()
{
    return iCount;
}

int main()
{
    QueueX<int> * sobj = new QueueX<int>();
    int iRet = 0;

    sobj->Enqueue(51);
    sobj->Enqueue(21);    
    sobj->Enqueue(11);

    sobj->Display();
    iRet = sobj->Count();

    cout<<"Number of elements from the queue : "<<iRet<<"\n";

    iRet = sobj->Dequeue();
    cout<<"Removed element is : "<<iRet<<"\n";

    iRet = sobj->Dequeue();
    cout<<"Removed element is : "<<iRet<<"\n";
    
    sobj->Display();
    iRet = sobj->Count();

    cout<<"Number of elements from the queue : "<<iRet<<"\n";

    delete sobj;
    
    return 0;
}