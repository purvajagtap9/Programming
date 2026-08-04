#include<stdio.h>
typedef unsigned int UINT;

//1011 0000
//0100 0000
int main()
{
    UINT iMask = 0XFFFFFFBF;   

    printf("Before : %X\n",iMask);

    iMask = ~iMask;
    
    printf("After : %X\n",iMask);

    return 0;
} 