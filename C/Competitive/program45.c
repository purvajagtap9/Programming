#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iRet = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2 )== 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        if((iDigit % 2)!= 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }
        iRet = iSumEven - iSumOdd;

        return iRet;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}