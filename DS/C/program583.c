#include<stdio.h>
#include<fcntl.h> //file control header
#include<unistd.h> // only for MAC Linux based OS
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[100] = {'\0'};    //string rikama buffer 

    fd = open("Marvellous.txt",O_RDONLY);  //read and write and append(overwrite nhi hot)

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File gets successfully opened with fd : %d\n",fd);

        iRet = read(fd,Data,13);
        printf("%d bytes gets successfully read\n",iRet);
        printf("Data from file is : %s\n",Data);

        ////ISSUE - Buffer Clean
        iRet = read(fd,Data,3);
        printf("%d bytes gets successfully read\n",iRet);
        printf("Data from file is : %s\n",Data);
        
        close(fd);
    }

    return 0;
}