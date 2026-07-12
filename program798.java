import java.util.*;

// O(N)
class program798
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        //           0,1,2,3,4,5,6,7
        int Arr[] = {0,1,0,0,1,0,0,1};

        int iStart = 0;
        int iEnd = Arr.length-1;
        int i = 0;

        while(iStart < iEnd)
        {
            if(Arr[iStart] == 0)
            {
                iStart++;
            }
            else if(Arr[iEnd] == 1)
            {
                iEnd--;
            }
            else
            {
                Arr[iStart] = 0;
                Arr[iEnd] = 1;
                iStart++;
                iEnd--;
            }
        }

        System.out.println("Segregated array is : ");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
    }
}
