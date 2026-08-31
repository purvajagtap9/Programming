#include<stdio.h>

//Factorial(Recursion) 
//4 
// 4 x 3 x 2 x 1 = 24 (internally)

int Factorial(int iNo)
{
    int iMult = 1;

    while(iNo != 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }

    return iMult;
}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}