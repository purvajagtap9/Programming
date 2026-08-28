#include<stdio.h>

//Fibonacci (Recursion) 
//4 
// 4 + 3 + 2 + 1 = 10 (internally)

int Summation(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + iNo;
        iNo--;
        Summation(iNo);
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