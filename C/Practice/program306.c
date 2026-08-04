#include<stdio.h>

//Accept no. and count no. of 1's.(Binary cha 1)
int main()
{
    int iNo = 0, iCount = 0 , iDigit = 0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCount++;
        }
        iNo = iNo / 2;
    }

    printf("Number of 1's are : %d\n",iCount);

    return 0;
}