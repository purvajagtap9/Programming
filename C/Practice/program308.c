#include<stdio.h>

//Accept no. and check whetther last third digit is 1 or not.

int main()
{
    int iNo = 0;
    int iMask = 4;
    int iAns = 0;

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