#include<stdio.h>

//Fibonacci //4
// 1 + 2 + 3 + 4 = 10

int Summation(int iNo)
{
    int iSum = 0;
    int i = 0;
    i = 1;

    while(i <= iNo)
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}