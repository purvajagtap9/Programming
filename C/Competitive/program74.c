#include <stdio.h>
#include<stdlib.h>


void Digit(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= 100 && Arr[iCnt] <= 999) ||
           (Arr[iCnt] <= -100 && Arr[iCnt] >= -999))
           {
                printf("%d\t",Arr[iCnt]);
           }
    }


}

int main()
{

    int iCnt=0,iSize = 0;
    int * p = NULL;


    printf("Enter number of elements");
    scanf("%d",&iSize);



    p=(int*)malloc (iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocated memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements : %d ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digit(p,iSize);
    
    


    free(p);

    return 0;


}
