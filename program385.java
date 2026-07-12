
class node<T>
{
    public T data;
    public node<T> next;
}

class StackX<T>
{
    private node<T> first;
    private int iCount;

    public StackX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void push(T no)    //InsertFirst
    {
        node<T> newn = new node<T>();

        newn.data = no;
        newn.next = null;

        newn.next = first;
        first = newn;

        iCount++;
    }

    public T pop()           //DeleteFirst
    {
        node<T> temp = first;
    
        if(this.first == null)  // Stack empty
        {
            System.out.println("Unable to pop as stack is empty");
            return null;
        }
        else
        {
            first = first.next;
            iCount--;
            return temp.data;  
        }
    }

    public void Display()
    {
        node<T> temp = null;

        temp = this.first;

        while(temp != null)
        {
            System.out.println("| "+temp.data+" |");
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }
}

class program385
{
    public static void main(String A[])
    {
        StackX<Integer> sobj = new StackX<>();
        int iRet = 0;

        sobj.push(10);
        sobj.push(20);
        sobj.push(30);
        sobj.push(40);
        sobj.push(50);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the stack are : "+iRet);

        iRet = sobj.pop();
        System.out.println("Poped element from stak is : "+iRet);

        iRet = sobj.pop();
        System.out.println("Poped element from stak is : "+iRet);
        
        iRet = sobj.pop();
        System.out.println("Poped element from stak is : "+iRet);
        
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the stack are : "+iRet);
    }
}