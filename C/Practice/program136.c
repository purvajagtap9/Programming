#include<stdio.h>
#include<stdlib.h>

//Time complexity - O(N)

int Minimum(int Arr[],int iSize)  
{
    int iCnt = 0;
    int iMin = 0;

    iMin = Arr[0];  //array mdhli 1st value store krnr mg tyala sglya shi compare krnar

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt]; //iMin update krt jaycha min bhetla tr
        }
    }

    return iMin;
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

    iRet = Minimum(Brr,iLength);

    printf("Minimum element is : %d\n",iRet);

    free(Brr);

    return 0;
} 