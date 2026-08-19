#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int iCnt = 0;

    if(iStart < 0)
    {
        iStart = -iStart;
    }

    for(iCnt =iStart; iCnt <= iEnd; iCnt++ )
    {
        if((iCnt % 2) == 0)
        {
            printf("%d",iCnt);
        }
        
    }
    
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    

    printf("Enter number \n");
    scanf("%d",&iValue1);

    printf("Enter number \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    
    return 0;
}