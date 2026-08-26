#include<stdio.h>
//Recursion 
void Display()     
{
    static int i = 1;                 

    printf("Jay Ganesh...%d\n",i);
    i++;

    Display();          //bad programming //ithe stack frame bnli ki tycha counting 

}

int main()
{
    Display();

    return 0;
}