#include<stdio.h>
//Iteration to Recursion
void Display()
{
    auto int i = 0;   //auto ahe storage class 
    i = 1;
    
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