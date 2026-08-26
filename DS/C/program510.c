#include<stdio.h>
//Iteration
void Display()
{
    static int i = 1;   //storage class 
    
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