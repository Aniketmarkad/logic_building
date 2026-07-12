import java.util.*;

class program791
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

        System.out.println("Number of ON bits are : "+iCount);
    }
}
