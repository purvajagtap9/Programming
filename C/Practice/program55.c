//Input :  5
//Output : 1 2 3 4  

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt = iCnt + 1)  //0+1 = 1 , 1+1 = 2 , 2+1 = 3 , 3+1 = 4
    {
        printf("%d\t",iCnt);

    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);    

    Display(iValue);
    return 0;

}
