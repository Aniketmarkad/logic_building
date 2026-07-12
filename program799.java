import java.util.*;

// Input : i love programming in python
// Output : i in love python programming

class program799
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");
    
        System.out.println(str);
    }
}
