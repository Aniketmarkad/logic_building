import java.util.*;
import java.io.*;

class program434
{
    public static void main(String A[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of file that you want to create : ");
            String Fname = sobj.nextLine();

            File fobj = new File(Fname);

            if(fobj.exists())
            {
                System.out.println("File already exist..");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File succesfully created...");
            }
        }
        catch(IOException iobj)
        {}
        catch(Exception eobj)
        {}
    }
}