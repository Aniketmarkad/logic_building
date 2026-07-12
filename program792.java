import java.util.*;

class program792
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        int iCount = 0;

        while(No != 0)
        {
            No = No & (No - 1);
            iCount++;
        }

        if(iCount == 1)
        {
            System.out.println("Number is power of 2");
        }
        else
        {
            System.out.println("Number is not a power of 2");
        }
    }
}
