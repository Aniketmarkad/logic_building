import java.util.*;

class program516
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("  "," ");

        System.out.println(str);
    }
}