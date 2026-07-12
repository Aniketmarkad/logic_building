import java.util.*;

// Input : i love programming in python
// Output : i in love python programming

class program800
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");
    
        String words[] = str.split(" ");

        Arrays.sort(words, Comparator.comparingInt(String::length));

        String finalstr = String.join(" ",words);

        System.out.println(finalstr);
    }
}
