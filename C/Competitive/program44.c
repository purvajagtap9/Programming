#include<stdio.h>

int MultDidits(int iNo)
{
    int iDigit = 0;
    int iSum = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum * iDigit;

        iNo = iNo / 10;
    }

    return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = MultDidits(iValue);

    printf("%d",iRet);

    return 0;
}