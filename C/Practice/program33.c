#include<stdio.h>
void Display(int iNo)
{  
    int iCnt =0;
    //Filter
    if(iNo<0)
    {
        printf("Invalid Input\n");
        return;
    }
    for(iCnt=0; iCnt<=iNo; iCnt++) //increasing number of iterations from 0 to iNo
    {
        printf("%d\n",iCnt);
    }
}  
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : ");
    scanf("%d",&iValue); 

    Display(iValue);
    
    return 0;

}