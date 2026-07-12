import java.util.*;

class program490
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        String sRet = str.trim();

        System.out.println("Updated string is : "+sRet);
        System.out.println("String length is : "+sRet.length());
    }
}