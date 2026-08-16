#include<stdio.h>

void TableRev(int iNo)
{   
    int iCnt = 0;
    int iSum = 1;

    
    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iSum = iCnt * iNo;
        printf("%d",iSum);
    }

    
}

int main()
{
    int iValue = 0,iRet = 0;
   
    printf("Enter number \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}