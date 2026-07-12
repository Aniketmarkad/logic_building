import java.util.*;

class program480
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        int i = 0, iCount = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i< Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
        }

        System.out.println("Number of white spaces are : "+iCount);
    }
}