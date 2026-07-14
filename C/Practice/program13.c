#include<stdio.h>

CheckEvenOdd(int ino)
{
    int irem=0;

    irem = ino%2;
    
    return irem;
     
}

int main()
{
    int ivalue=0; //only for main function local function
    int iRet=0;

    printf("Enter a number : \n");
    scanf("%d",&ivalue);

    iRet = CheckEvenOdd(ivalue);

    if(iRet==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    return 0;
}