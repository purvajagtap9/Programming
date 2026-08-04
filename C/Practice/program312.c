#include<stdio.h>

//Accept no. and check whether last 7th bit is on or off.

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 4096;
    UINT iAns = 0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("13th bit is ON\n");
    }
    else
    {
        printf("13th bit is OFF\n");
    }

    return 0;
}