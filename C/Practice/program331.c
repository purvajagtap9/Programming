#include<stdio.h>
typedef unsigned int UINT;

//Position : 11th bit toggle

int main()
{

    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = 0X400;
    iNo = iNo ^ iMask;   //xor
    printf("Updated number : %d\n",iNo);
    
    return 0;
}