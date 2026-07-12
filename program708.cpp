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
//  Entry point function of project (main)
//
///////////////////////////////////////////////////////////////////////

int main()
{
    StartAuxilaryDataInitialisation();

    cout<<"---------------------------------------------------------\n";
    cout<<"--------- Marvellous CVFS Started Succesfully ------------\n";
    cout<<"----------------------------------------------------------\n";
    
    while(1)
    {
        
    }

    return 0;
}