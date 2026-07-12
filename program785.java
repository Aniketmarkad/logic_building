import java.util.*;

class program785
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        if((No & 1) == 1)
        {
            System.out.println("Number is odd");
        }
        else
        {
            System.out.println("Number is even");
        }
    }
}
