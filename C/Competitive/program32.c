#include<stdio.h>

int DollarToINR(int iNo)
{   
    int iCnt = 70;
    int iSum = 0;

    iSum = iCnt * iNo;

    return iSum;
    
}

int main()
{
    int iValue = 0 , iRet = 0;
   
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}