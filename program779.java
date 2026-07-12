import java.util.*;

class IPForming
{
    public int FormIP(int No1, int No2, int No3, int No4)
    {
        return 0;
    }
}

class program779
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter IP address : ");
        int No1 = sobj.nextInt();
        int No2 = sobj.nextInt();
        int No3 = sobj.nextInt();
        int No4 = sobj.nextInt();
        
        IPForming iobj = new IPForming();

        int iRet = iobj.FormIP(No1, No2, No3, No4);

        System.out.println("Formed number contains IP address is : "+iRet);
    }
}
