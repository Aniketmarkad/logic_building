
// abcdefg hijk
// kjih gfedcba

import java.util.*;

class program529
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        StringBuilder sb = new StringBuilder(str);

        sb.reverse();

        System.out.println(sb);
    }
}