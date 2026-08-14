#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iSum = 1;   //0 * anything = 0  //1 * anything = same number

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) == 0)
        {
            iSum = iSum * i;   

        }
       
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}