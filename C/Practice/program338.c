#include<stdio.h>
typedef unsigned int UINT;

//Position : 13th bit off krychie (0)
int main()
{

    UINT iNo = 0;
    UINT iMask = 0XFFFFEFFF;   
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;   

    printf("Updated number : %d\n",iNo);
    
    return 0;
} 