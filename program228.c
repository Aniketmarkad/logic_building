#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",Fname);

    // O_RDONLY
    // O_WRONLY
    // O_RDWR

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    printf("File is succesfully opened with FD %d\n",fd);

    return 0;
}