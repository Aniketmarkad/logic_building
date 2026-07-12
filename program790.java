import java.util.*;

class program790
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int No = sobj.nextInt();

        int iCount = 0;
        int iMask = 0x00000001;
        int i = 0;

        for(i = 1; i < 32; i++)
        {
            if((No & iMask) == iMask)
            {
                iCount++;
            }
            iMask <<= 1;
        }

        System.out.println("Number of ON bits are : "+iCount);
    }
}
