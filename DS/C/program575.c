#include<stdio.h>
#include<fcntl.h> //file control header
#include<unistd.h> // only for MAC Linux based OS

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File gets successfully opened with fd : %d\n",fd);
        close(fd);
    }

    return 0;
}