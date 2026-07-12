class node
{
    public char data;
    public node next;
}

class QueueX
{
    private node first;
    private int iCount;

    public QueueX()
    {
        this.first = null;
        this.iCount = 0;
    }

    public void enqueue(char no)    //InsertLast
    {
        node temp = null;
        node newn = new node();

        newn.data = no;
        newn.next = null;

        if(this.first == null)
        {
            this.first = newn;
        }
        else
        {
            temp = this.first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        iCount++;
    }

    public char dequeue()           //DeleteFirst
    {
        node temp = first;
    
        if(this.first == null)  // Queue empty
        {
            System.out.println("Unable to remove as queue is empty");
            return (char)-1;
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
            System.out.print("| "+temp.data+" | - ");
            temp = temp.next;
        }
        System.out.println();
    }

    public int Count()
    {
        return iCount;
    }
}

class program383
{
    public static void main(String A[])
    {
        QueueX sobj = new QueueX();
        int iRet = 0;
        char cRet = '\0';

        sobj.enqueue('A');
        sobj.enqueue('B');
        sobj.enqueue('C');
        sobj.enqueue('D');
        sobj.enqueue('E');

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the queue are : "+iRet);

        cRet = sobj.dequeue();
        System.out.println("Removed element from queue is : "+cRet);

        cRet = sobj.dequeue();
        System.out.println("Removed element from queue is : "+cRet);
        
        cRet = sobj.dequeue();
        System.out.println("Removed element from queue is : "+cRet);
        
        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of elements in the queue are : "+iRet);
    }
}