///////////////////////////////////////////////////////////////////////
//
//  Header files inclusion
//
///////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#include<iostream>

using namespace std;

///////////////////////////////////////////////////////////////////////
//
//  User defined Macros
//
///////////////////////////////////////////////////////////////////////

# define MAXFILESIZE 100

# define MAXINODE 5

# define READ 1
# define WRITE 2
# define EXECUTE 4

# define REGULARFILE 1
# define SPECIALFILE 2

# define START 0
# define CURRENT 1
# define END 2

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    BootBlock 
//  Description :       Holds information to boot the operating system
//
///////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    SuperBlock 
//  Description :       Holds information about the file system
//
///////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    Inode 
//  Description :       Holds information about the file
// 
///////////////////////////////////////////////////////////////////////

typedef struct Inode
{
    char FileName[50];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int LinkCount;
    int Permission;
    char *Buffer;
    struct Inode *next;
}INODE, *PINODE, **PPINODE;

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    FileTable 
//  Description :       Holds information about the opened file
// 
///////////////////////////////////////////////////////////////////////

typedef struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Count;
    int Mode;
    PINODE ptrinode;
}FILETABLE, *PFILETABLE;

///////////////////////////////////////////////////////////////////////
//
//  Structure Name :    UAREA 
//  Description :       Holds information about the process
// 
///////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[50];
    PFILETABLE UFDT[MAXINODE];
};

///////////////////////////////////////////////////////////////////////
//
//  Global variables or objects used in the project
// 
///////////////////////////////////////////////////////////////////////

BootBlock bootobj;
SuperBlock superobj;
PINODE head = NULL;
UAREA uareaobj;

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUAREA
//  Description :       It is used to intialise the contents UAREA
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    strcpy(uareaobj.ProcessName,"Myexe");

    int i = 0;

    while(i < MAXINODE)
    {
        uareaobj.UFDT[i] = NULL;
        i++;
    }
    cout<<"Marvellous CVFS : UAREA initialised succesfully\n";
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperblock
//  Description :       It is used to intialise the contents of super block
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void InitialiseSuperblock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    cout<<"Marvellous CVFS : Superblock initialised succesfully\n";
}


///////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB
//  Description :       It is used to create Linked List of Inodes
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    int i = 1;
    PINODE newn = NULL;
    PINODE temp = head;

    while(i <= MAXINODE)
    {
        newn = new INODE;

        newn->InodeNumber = i;
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->LinkCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }

        i++;
    }

    cout<<"Marvellous CVFS : DILB created succesfully\n";
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     StartAuxilaryDataInitialisation
//  Description :       It is used to intialise the Auxilary data
//  Author :            Piyush Manohar Khairnar
//  Date :              10/08/2025
//
///////////////////////////////////////////////////////////////////////

void StartAuxilaryDataInitialisation()
{

    strcpy(bootobj.Information,"Boot process of Opertaing System done");

    cout<<bootobj.Information<<"\n";

    InitialiseSuperblock();

    CreateDILB();

    InitialiseUAREA();
    
    cout<<"Marvellous CVFS : Auxilary data initalised succesfully\n";
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     DisplayHelp
//  Description :       It is used to Display the information about commands
//  Author :            Piyush Manohar Khairnar
//  Date :              11/08/2025
//
///////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
    printf("---------------------------------------------------------\n");
    printf("----------- Command Manual of Marvellous CVFS -----------\n");
    printf("---------------------------------------------------------\n");

    printf("exit : It is used to terminate the shell of Marvellous CVFS\n");
    printf("clear : It is used to clear the console of Marvellous CVFS\n");

    // Add more options here

    printf("---------------------------------------------------------\n");
}


///////////////////////////////////////////////////////////////////////
//
//  Function Name :     ManPage
//  Description :       It is used to Display the manual page of the command
//  Input :             It accepts the command name
//  Output :            Displays the manual details of the command
//  Author :            Piyush Manohar Khairnar
//  Date :              11/08/2025
//
///////////////////////////////////////////////////////////////////////

void ManPage(char *name)
{
    if(strcmp(name,"creat") == 0)
    {
        printf("Description : This command is used to create new regular file on our file system\n");

        printf("Usage : creat File_name Permissions\n");
        printf("File_name : The name of file that you want to create\n");
        printf("Permissions : \n1 : Read \n2 : Write \n3 : Read + Write\n");
    }
    else if(strcmp(name,"exit") == 0)
    {
        printf("Description : This command is used to terminate the Marvellous CVFS\n");

        printf("Usage : exit\n");     
    }
    // Add more options here
    else
    {
        printf("No manual entry for %s\n",name);
    }
}

///////////////////////////////////////////////////////////////////////
//
//  Entry point function of project (main)
//
///////////////////////////////////////////////////////////////////////

int main()
{
    char str[80] = {'\0'};
    int iCount = 0;
    char Command[5][80];

    StartAuxilaryDataInitialisation();

    cout<<"---------------------------------------------------------\n";
    cout<<"--------- Marvellous CVFS Started Succesfully ------------\n";
    cout<<"----------------------------------------------------------\n";
    
    while(1)
    {
        fflush(stdin);

        printf("\nMarvellous CVFS > ");
        fgets(str,sizeof(str),stdin);

        iCount = sscanf(str,"%s %s %s %s",Command[0],Command[1], Command[2], Command[3]);

        if(iCount == 1)
        {
            // Marvellous CVFS > exit

            if(strcmp(Command[0], "exit") == 0)
            {
                printf("Thank you for using Marvellous CVFS\n");
                printf("Deallocating all resources...\n");

                break;
            }

            // Marvellous CVFS > help
            
            else if(strcmp(Command[0], "help") == 0)
            {
                DisplayHelp();
            }

            // Marvellous CVFS > clear

            else if(strcmp(Command[0], "clear") == 0)
            {
                system("clear");
            }
        }   // End of if iCount == 1

        else if(iCount == 2)
        {
            // Marvellous CVFS > man creat

            if(strcmp(Command[0], "man") == 0)
            {
                ManPage(Command[1]);
            }
        }   // End of if iCount == 2
        
        else if(iCount == 3)
        {

        }   // End of if iCount == 3
        
        else if(iCount == 4)
        {

        }   // End of if iCount == 4
        
        else
        {
            printf("Coomand not found...\n");
            printf("Please refer Help option or use man command\n");
        }   // End of invalid command part

    }   // End of while (Custom Shell)

    return 0;
}   // End of main