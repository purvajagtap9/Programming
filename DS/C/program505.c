#include<stdio.h>
//Recursion starts here 
void Display()     
{
    auto int i = 1;                 

    printf("Jay Ganesh...%d\n",i);
    i++;

    Display();          //bad programming ithe stack frae bnli old geli new ali so 1 1 1 1 

}

int main()
{
    Display();

    return 0;
}