#include<stdio.h>
typedef unsigned int UINT;

int main()
{
    UINT iMask = 1;
    int iCnt = 0;

    for(iCnt = 1;iCnt <= 33; iCnt++)  //data padla uutu gela data loss zhala tyamule 0 ala 
    {
        printf("%d : %X\n",iCnt,iMask);  
        iMask = iMask<<1;   
    }   

    return 0;
}