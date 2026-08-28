#include<stdio.h>
//Recursive 
void Display(int iNo)
{
    if(iNo != 0)
    {
       printf("Jay Ganesh...%d\n",iNo);
       Display(--iNo);    //pre decrement 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End of main\n");

    return 0;
}