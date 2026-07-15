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
    for(iCnt=iNo; iCnt>=0; iCnt--)  //decreasing number of iterations
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