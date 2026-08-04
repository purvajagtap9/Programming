#include<stdio.h>

typedef unsigned int UINT;

//Position : 3 & 8  toggle 

int main()
{
    UINT iMask1 = 0X00000004;  
    UINT iMask2 = 0X00000080; 
    UINT iMask = 0;

    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = iMask1 | iMask2; 

    iResult = iNo ^ iMask;
    
    printf("Updated number is : %d\n",iResult);

    return 0;
} 