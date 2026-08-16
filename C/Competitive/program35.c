#include<stdio.h>

int OddFactorial(int iNo)
{   
    int iCnt = 0;
    int iSum = 1;
    int iResult = 1;
    int iRet = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
            iSum = iCnt * iSum;
        }
        if((iCnt % 2)== 0)
        {
            iResult = iCnt * iResult;
        }
    }
    
    iRet = iResult - iSum;
    return iRet;
    
}

int main()
{
    int iValue = 0 , iRet = 0;
   
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}