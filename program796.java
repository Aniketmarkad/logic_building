import java.util.*;

class program796
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {7,2,9,7,3,8,2,9,3};

        int i = 0, iFound = 0;

        // Arr.length = 9
        //0,1,2,3,4,5,6,7,8
        //7,2,9,7,3,8,2,9,3

        for(i = 0; i < Arr.length; i++)
        {
           iFound = iFound ^ Arr[i];
        }

        System.out.println("Non paired element is : "+iFound);
    }
}
