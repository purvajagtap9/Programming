#include<stdio.h>

typedef unsigned int UINT;

//Position : 3 & 8  toggle 

int main()
{
    UINT iMask1 = 0x1;  
    UINT iMask2 = 0x1; 
    UINT iMask = 0;

    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask1 = iMask1 << 2;   //(3-1 = 2)
    iMask1 = iMask1 << 7;   //(8-1 = 7)


    iMask = iMask1 | iMask2; 

    iResult = iNo ^ iMask;
    
    printf("Updated number is : %d\n",iResult);

    return 0;
} 