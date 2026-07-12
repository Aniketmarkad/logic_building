import java.util.*;

class Employee
{
    public int EmpID;
    public String EmpName;
    public int EmpAge;
    public String EmpAddress;
    public int EmpSalary;

    private static int Counter;

    static
    {
        Counter = 1;
    }

    public Employee(String b, int c, String d, int e)
    {
        this.EmpID = Counter++;
        this.EmpName = b;
        this.EmpAge = c;
        this.EmpAddress = d;
        this.EmpSalary = e;
    }

    public void DisplayInformation()
    {
        System.out.println("ID : "+this.EmpID+" Name : "+this.EmpName+" Age : "+this.EmpAge+" Address : "+this.EmpAddress+" Salary : "+this.EmpSalary);
    }

    public String toString()
    {
        return "ID : "+this.EmpID+" Name : "+this.EmpName+" Age : "+this.EmpAge+" Address : "+this.EmpAddress+" Salary : "+this.EmpSalary;
    }
}

class program837
{
    public static void main(String A[])
    {
        LinkedList <Employee> lobj = new LinkedList();

        Employee eobj1 = new Employee("Amit",23,"Pune",21000);
        Employee eobj2 = new Employee("Sagar",23,"Pune",21000);
        Employee eobj3 = new Employee("Pooja",23,"Pune",21000);
        Employee eobj4 = new Employee("Gauri",23,"Pune",21000);

        lobj.add(eobj1);
        lobj.add(eobj2);
        lobj.add(eobj3);
        lobj.add(eobj4);
        
        for(Employee eobj : lobj)
        {
            System.out.println(eobj);
        }

    }
}