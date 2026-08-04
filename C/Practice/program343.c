#include<stdio.h>

typedef unsigned int UINT;

//Position : 3 & 7 toggle 

int main()
{
    UINT iMask = 0X00000044;   //0XFFFFFFBB
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    
    printf("Updated number is : %d\n",iResult);

    return 0;
} 