import java.util.*;

class program794
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        if((No & (No - 1)) == 0)
        {
            System.out.println("Number is power of 2");
        }
        else
        {
            System.out.println("Number is not a power of 2");
        }
    }
}
