#include<stdio.h>  

int CalculateTicketPrice(int iAge)
{
    //Input Updater
    if(iAge<0)
    {
        iAge = -iAge;
    }
    if(iAge>=0 && iAge<=5)
    {
        return 0;
    }
    else if(iAge>=6 && iAge<=18)
    {
        return 500;
    }
    else if(iAge>=19 && iAge<=50)
    {
        return 900;
    }
    else 
    {
        return 400;
    }
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Please enter your Age to calculate ticket price :");
    scanf("%d",&iValue);

    iRet = CalculateTicketPrice(iValue);

    printf("Your ticket price will be %drs\n",iRet);

    return 0;
}