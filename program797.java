import java.util.*;

// O(2N)
class program797
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        //           0,1,2,3,4,5,6,7
        int Arr[] = {0,1,0,0,1,0,0,1};

        int iSum = 0;

        for(int no : Arr)
        {
            iSum += no;
        }
        
        int i = 0;
        for(i = 0; i < Arr.length - iSum; i++)
        {
            Arr[i] = 0;
        }   
        for(i = Arr.length - iSum; i < Arr.length; i++)
        {
            Arr[i] = 1;
        }

        System.out.println("Segregated array is : ");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }
}
