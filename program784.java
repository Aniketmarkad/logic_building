import java.util.*;

class program784
{
    public static int FormIP(int No1, int No2, int No3, int No4)
    {
        No1 = No1 << 24;
        No2 = No2 << 16;
        No3 = No3 << 8;
        No4 = No4 << 0;
        
        int IP = No1 | No2 | No3 | No4;

        return IP;
    }

    public static void SplitIP(int IP)
    {
        long No1 = 0, No2 = 0, No3 = 0, No4 = 0;
        
        int Mask1 = 0;
        int Mask2 = 0x00ff0000;
        int Mask3 = 0x0000ff00;
        int Mask4 = 0x000000ff;

        No1 = IP >> 24;

        No2 = IP & Mask2;
        No2 = No2 >> 16;

        No3 = IP & Mask3;
        No3 = No3 >> 8;

        No4 = IP & Mask4;

        System.out.println("IP address is : ");
        System.out.println(No1+"."+No2+"."+No3+"."+No4);
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter IP address : ");
        int No1 = sobj.nextInt();
        int No2 = sobj.nextInt();
        int No3 = sobj.nextInt();
        int No4 = sobj.nextInt();
        
        int iRet = FormIP(No1, No2, No3, No4);

        System.out.println("Formed number contains IP address is : "+iRet);

        SplitIP(iRet);
    }
}
