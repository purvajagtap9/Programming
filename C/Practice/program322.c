#include<stdio.h>
typedef unsigned int UINT;

int main()
{
    UINT iMask = 1;
    int iCnt = 0;

    for(iCnt = 1;iCnt < 32; iCnt++)
    {
        printf("%d : %d\n",iCnt,iMask);  //2^0 to 2^30
        iMask = iMask<<1;   
    }   

    return 0;
}