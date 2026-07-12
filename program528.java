
// demo hello pune demo code hello india ppa lb hello

// demo hello pune code india ppa lb

import java.util.*;

class program528
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String tokens[] = str.split(" ");

        HashMap <String, Integer> hobj = new HashMap <String, Integer>(); 

        for(String s : tokens)
        {
            if(hobj.containsKey(s))
            {
                hobj.put(s,hobj.get(s)+1);
            }
            else
            {
                hobj.put(s,1);
            }
        }

        String newstr = "";

        for(String s : hobj.keySet())
        {
            newstr = newstr + s;
            newstr = newstr + " ";
        }

        System.out.println(newstr.trim());
    }
}