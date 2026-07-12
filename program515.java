import java.util.*;

class program515
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("a","x");

        System.out.println(str);
    }
}