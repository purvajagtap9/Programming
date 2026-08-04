#include<stdio.h>

//Accept no. and check whetther last 17th bit is on or off.

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x0001000;
    UINT iAns = 0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th bit is ON\n");
    }
    else
    {
        printf("17th bit is OFF\n");
    }

    return 0;
}