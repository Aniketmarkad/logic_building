import java.util.*;
import java.io.*;

class program451
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of Directory that you want to pack : ");
            String DirName = sobj.nextLine();

            System.out.println("Enter the name of file that you want to create for packing : ");
            String PackName = sobj.nextLine();

            File PackObj = new File(PackName);

            boolean bRet = PackObj.createNewFile();

            if(bRet == false)
            {
                System.out.println("Unable to create pack file");
                return;
            }
            
            File fobj = new File(DirName);

            if((fobj.exists()) && (fobj.isDirectory()))
            {
                System.out.println("Directory is present");

                File Arr[] = fobj.listFiles();

                System.out.println("Number of files in the directory are : "+Arr.length);
            
                int i = 0;

                for(i = 0; i < Arr.length; i++)
                {
                    System.out.println("File name is : "+Arr[i].getName()+" File size is : "+Arr[i].length());
                }          
            }
            else
            {
                System.out.println("There is no such directory");
            }
        }
        catch(Exception eobj)
        {}
    }
}