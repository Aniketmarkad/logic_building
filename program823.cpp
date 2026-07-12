#include<iostream>
using namespace std;

template <class T>
struct SinglyCLLnode
{
    T data;
    struct SinglyCLLnode<T> *next;
};

template <class T>
class SinglyCLL
{
    private:
        struct SinglyCLLnode<T> * first;
        struct SinglyCLLnode<T> * last;
        int iCount;

    public:
        SinglyCLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void DeleteAtPos(int pos);
        void InsertAtPos(T no, int pos);
};

template <class T>
SinglyCLL<T>::SinglyCLL()
{
    cout<<"Inside constructor of SinglyCLL\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

template <class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)   // if(iCount == 0)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        newn->next = first;
        first = newn;

        last->next = first;
    }

    iCount++;
}

template <class T>
void SinglyCLL<T>::InsertLast(T no)
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)   // if(iCount == 0)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        last->next = newn;
        last = newn;

        last->next = first;
    }

    iCount++;
}

template <class T>
void SinglyCLL<T>::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last->next;

        last->next = first;
    }
    iCount--;
}

template <class T>
void SinglyCLL<T>::DeleteLast()
{
    struct SinglyCLLnode<T> * temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp -> next != last)
        {
            temp = temp -> next;
        }

        delete last;
        last = temp;

        last->next = first;
    }
    iCount--;
}

template <class T>
void SinglyCLL<T>::Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    struct SinglyCLLnode<T> * temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp -> next;
    } while (temp != last ->next);
    
    cout<<"\n";
}

template <class T>
int SinglyCLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCLL<T>::DeleteAtPos(int pos)
{
    struct SinglyCLLnode<T> * temp = NULL;
    struct SinglyCLLnode<T> * target = NULL;
    
    int i = 0;
    
    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < pos-1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp->next = target->next;
        delete target;

        iCount--;
    }
}

template <class T>
void SinglyCLL<T>::InsertAtPos(T no, int pos)
{
    struct SinglyCLLnode<T> * temp = NULL;
    struct SinglyCLLnode<T> * newn = NULL;

    int i = 0;

    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct SinglyCLLnode<T>;

        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < pos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp->next = newn;

        iCount++;
    }
}

int main()
{
    SinglyCLL<int> sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    
    sobj.InsertAtPos(105,5);

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteAtPos(5);

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteFirst();

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.DeleteLast();

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}