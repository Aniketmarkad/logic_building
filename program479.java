import java.util.*;

class program479
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        int i = 0, iCount = 0;

        for(i = 0; i< str.length(); i++)
        {
            if(str.charAt(i) == ' ')
            {
                iCount++;
            }
        }

        System.out.println("Number of white spaces are : "+iCount);
    }
}