#include<stdio.h>
//ERROR due to missing include<stdlib.h>  
int main()
{
    int *Brr = NULL; //pointer pointing to NULL
    int iLength = 0, iCnt = 0;

    //Step 1- Accept the no. of elements
    printf("Enter number of Elements :\n");
    scanf("%d",&iLength);

    //Step 2- Allocate the memory
    Brr=(int*)malloc(iLength*sizeof(int));

    //Step 3- Accept the values from user.
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //Step 4 - Use the memory (Logic means function call)

    //Step 5 - Deallocate the memory
    free(Brr);

    return 0;
}