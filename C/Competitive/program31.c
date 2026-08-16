#include<stdio.h>

void DIsplay(int iNo)
{   
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#");
    }
    
}

int main()
{
    int iValue = 0;
   
    printf("Enter number \n");
    scanf("%d",&iValue);

    DIsplay(iValue);

    return 0;
}