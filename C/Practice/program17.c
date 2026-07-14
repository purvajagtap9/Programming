#include<stdio.h>  //avoid as a fresher
#include<stdbool.h>

bool CheckEvenOdd(int ino)
{
    if((ino%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main()
{
    int iValue=0; 
    bool bRet=false;

    printf("Enter a number to check whether it is Even or Odd: ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is Odd Number\n",iValue);
    }
    return 0;
}