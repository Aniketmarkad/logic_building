import java.util.*;

class StudyLog
{
    public String Subject;
    public double Duration;
    public String Descrption;

    public StudyLog(String A, double B, String C)
    {
        this.Subject = A;
        this.Duration = B;
        this.Descrption = C;
    }

    public void Display()
    {
        System.out.println(Subject+" | "+Duration+" | "+Descrption);
    }
}

class program544
{
    public static void main(String A[])
    {
        StudyLog sobj1 = new StudyLog("C",2.5,"Pointer and Array");
        StudyLog sobj2 = new StudyLog("C++",2,"Polymorphism");
        StudyLog sobj3 = new StudyLog("Java",3.5,"Inheritance");
        
        System.out.println(sobj1);
        System.out.println(sobj2);
        System.out.println(sobj3);
        
    }
}