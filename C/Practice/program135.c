#include<stdio.h>
#include<stdlib.h>

//Time complexity - O(N)

int Maximum(int Arr[],int iSize)  
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];  //array mdhli 1st value store krnr

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt]; //iMax update krt jaycha max bhetla tr
        }
    }

    return iMax;
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

    iRet = Maximum(Brr,iLength);

    printf("Maximum element is : %d\n",iRet);

    free(Brr);

    return 0;
} 