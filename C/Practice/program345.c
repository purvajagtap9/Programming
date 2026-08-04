#include<stdio.h>

typedef unsigned int UINT;

//Position : 12 & 23  toggle 

int main()
{
    UINT iMask = 0X00400800;   
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;
    
    printf("Updated number is : %d\n",iResult);

    return 0;
} 