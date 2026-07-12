import java.util.*;

class program786
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        if(No & 0x00000001)
        {
            System.out.println("Number is odd");
        }
        else
        {
            System.out.println("Number is even");
        }
    }
}
