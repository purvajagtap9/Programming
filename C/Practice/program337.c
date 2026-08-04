#include<stdio.h>
typedef unsigned int UINT;

//Position : 4th bit toggle

int main()
{

    UINT iNo = 0;
    UINT iMask = 0XFFFFFFF7;   
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;   

    printf("Updated number : %d\n",iNo);
    
    return 0;
} 