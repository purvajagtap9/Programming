#include<stdio.h>
typedef unsigned int UINT;

//Position : 11th bit toggle

int main()
{

    UINT iNo = 0;
    UINT iMask = 0X1;   
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    printf("Enter position : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);
    iNo = iNo ^ iMask;   
    printf("Updated number : %d\n",iNo);
    
    return 0;
}