#include<stdio.h>
//Recursion starts here 
void Display()     
{
    printf("Jay Ganesh...\n");
    Display();         //bad programming thmbnr ch nhiye
}

int main()
{
    Display();

    return 0;
}