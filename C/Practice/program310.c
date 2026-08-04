#include<stdio.h>

//Accept no. and check whetther last third digit is 1 or not.

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 4;
    UINT iAns = 0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Third bit is ON\n");
    }
    else
    {
        printf("Third bit is OFF\n");
    }

    return 0;
}