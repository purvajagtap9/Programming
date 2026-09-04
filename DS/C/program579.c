#include<stdio.h>
#include<fcntl.h> //file control header
#include<unistd.h> // only for MAC Linux based OS

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";  //string

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);  //read and write and append(overwrite nhi hot)

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File gets successfully opened with fd : %d\n",fd);

        iRet = write(fd,Data,10);
        printf("%d bytes gets successfully written\n",iRet);
        
        close(fd);
    }

    return 0;
}