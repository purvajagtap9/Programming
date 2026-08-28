#include<stdio.h>
//Iteration
void Display(int iNo)
{
    auto int i = 0;   //auto ahe storage class 
    i = 1;
    while(i <= iNo)
    {
       printf("Jay Ganesh...\n");
       i++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}