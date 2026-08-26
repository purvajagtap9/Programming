#include<stdio.h>
//Iteration
void Display()
{
    static int i = 0;   //storage class 
    i = 1;       //Issue
    if(i <= 4)
    {
       printf("Jay Ganesh...\n");
       i++;
       Display();
    }
}

int main()
{
    Display();
    return 0;
}