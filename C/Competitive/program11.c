#include<stdio.h>
void printEven(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        return;
    }
    for(i = 1; i <= iNo; i++)
    {
        printf("%d",i*2);
    }
}


int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}