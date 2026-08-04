#include<stdio.h>

//Accept no. and check whetther last third digit is 1 or not.

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;
    unsigned int iAns = 0;

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