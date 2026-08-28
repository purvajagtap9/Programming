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
    Display(7);
    return 0;
}