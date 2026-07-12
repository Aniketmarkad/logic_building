class node
{
    public double data;
    public node next;
}

class StackX
{
    private node first;
    private int iCount;

    public StackX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void push(double no)    //InsertFirst
    {
        node newn = new node();

        newn.data = no;
        newn.next = null;

        newn.next = first;
        first = newn;

        iCount++;
    }

    public double pop()           //DeleteFirst
    {
        node temp = first;
    
        if(this.first == null)  // Stack empty
        {
            System.out.println("Unable to pop as stack is empty");
            return -1;
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
        node temp = null;

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

class program382
{
    public static void main(String A[])
    {
        StackX sobj = new StackX();
        int iRet = 0;
        double dRet = 0.0;

        sobj.push(10.0);
        sobj.push(20.0);
        sobj.push(30.0);
        sobj.push(40.0);
        sobj.push(50.0);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the stack are : "+iRet);

        dRet = sobj.pop();
        System.out.println("Poped element from stak is : "+dRet);

        dRet = sobj.pop();
        System.out.println("Poped element from stak is : "+dRet);
        
        dRet = sobj.pop();
        System.out.println("Poped element from stak is : "+dRet);
        
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the stack are : "+iRet);
    }
}