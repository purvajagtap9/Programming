#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
    int iCnt = 0,iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0) //==1
        {
            iCount++;
        }
    }

    return iCount;

}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
     

    printf("Enter size of an element: \n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter the elements : \n");

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CountOdd(Brr,iLength);

    printf("Odd elements are : %d\n",iRet);

    free(Brr);

    return 0;
}