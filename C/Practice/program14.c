#include<stdio.h>

CheckEvenOdd(int ino)
{
    int iRem=0;

    iRem = ino%2;
    
    return iRem;
     
}

int main()
{
    int iValue=0; 
    int iRet=0;

    printf("Enter a number to check whether it is Even or Odd: ");
    scanf("%d",&iValue);

    iRet = CheckEvenOdd(iValue);

    if(iRet==0)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue);
    }
    return 0;
}