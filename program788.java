import java.util.*;

class program788
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        int Digit = 0, iCount = 0;

        while(No != 0)
        {
            Digit = No % 2;
            if(Digit == 1)
            {
                iCount++;
            }
            No = No / 2;
        }
        
        System.out.println("Number of ON bits are : "+iCount);
    }
}
