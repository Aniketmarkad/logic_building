import java.util.*;
import java.time.LocalDate;

// DONE
class StudyLog
{
    public LocalDate Date;
    public String Subject;
    public double Duration;
    public String Descrption;

    public StudyLog(LocalDate A, String B, double C, String D)
    {
        this.Date = A;
        this.Subject = B;
        this.Duration = C;
        this.Descrption = D;
    }

    @Override
    public String toString()
    {
        return Date+" | "+Subject+" | "+Duration+" | "+Descrption;
    }

    public LocalDate getDate()
    {
        return Date;
    }

    public String getSubject()
    {
        return Subject;
    }

    public double getDuration()
    {
        return Duration;
    }

    public String getDescription()
    {
        return Descrption;
    }
}

class StudyTracker
{
    // Data structure to hold the data about study 
    private ArrayList <StudyLog> Database = new ArrayList <StudyLog> ();

    public void InsertLog()
    {
        Scanner ScanerObj = new Scanner(System.in);

        System.out.println("----------------------------------------------------");
        System.out.println("--- Please enter the valid details of your study ---");
        System.out.println("----------------------------------------------------");

        LocalDate DateObj = LocalDate.now();

        System.out.println("Please provide the name of subject like C/C++/Java/OS/DS");
        String sub = ScanerObj.nextLine();

        System.out.println("Enter the time period if your study in hours");
        double dur = ScanerObj.nextDouble();
        ScanerObj.nextLine();

        System.out.println("Please provide the description about the study for future referecne");
        String desc = ScanerObj.nextLine();
        
        StudyLog StudyObj = new StudyLog(DateObj,sub,dur,desc);

        Database.add(StudyObj);

        System.out.println("Study Log gets stored succesfully");
        System.out.println("----------------------------------------------------");
    }

    public void DisplayLog()
    {
        System.out.println("----------------------------------------------------");
       
        if(Database.isEmpty())
        {
            System.out.println("Nothing to display as database is empty");
            System.out.println("----------------------------------------------------");
            return;
        }

        System.out.println("----------------------------------------------------");
        System.out.println("---- Log report from Marvellous Study Tracker ------");
        System.out.println("----------------------------------------------------");
        
        for(StudyLog sobj : Database)
        {
            System.out.println(sobj);
        }
        System.out.println("----------------------------------------------------");
    }
}

class program555    // StudyTrackerStarter
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();

        Scanner ScanerObj = new Scanner(System.in);

        int iChoice = 0;

        System.out.println("----------------------------------------------------");
        System.out.println("--Welcome to Marvellous Study Tracker Application --");
        System.out.println("----------------------------------------------------");

        do
        {
            System.out.println("Please select the appropriate option");
            System.out.println("1 : Insert new Study Log into Databse");
            System.out.println("2 : View All Study Logs");
            System.out.println("3 : Summary of Study Log by Date");
            System.out.println("4 : Summary of Study Log by Subject");
            System.out.println("5 : Export Study Log to CSV file");
            System.out.println("6 : Exit the application");

            iChoice = ScanerObj.nextInt();

            switch(iChoice)
            {
                case 1:     // Insert new Study Log into Databse
                    stobj.InsertLog();
                    break;

                case 2:     // View All Study Logs
                    stobj.DisplayLog();
                    break;
                
                case 3:     // Summary of Study Log by Date

                    break;
                
                case 4:     // Summary of Study Log by Subject

                    break;
                
                case 5:     // Export Study Log to CSV file

                    break;
                
                case 6:     // Exit the application
                    System.out.println("----------------------------------------------------");
                    System.out.println("Thank you for using Marvellous Study Log application");
                    System.out.println("----------------------------------------------------");
                    break;

                default:
                    System.out.println("Please enter the valid option");
            }
            
        }while(iChoice != 6);

    }
}