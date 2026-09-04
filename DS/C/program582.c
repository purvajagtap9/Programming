#include<stdio.h>
#include<fcntl.h> //file control header
#include<unistd.h> // only for MAC Linux based OS
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[100] = {'\0'};    //string rikama buffer 
    char DataX[100] = {'\0'};   //

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

        iRet = read(fd,DataX,3);
        printf("%d bytes gets successfully read\n",iRet);
        printf("Data from file is : %s\n",DataX);
        
        close(fd);
    }

    return 0;
}