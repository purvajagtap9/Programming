#include<stdio.h>

int main()
{
    int Arr[]={10,20,30,40,50}; //1D array

    printf("%d\n",Arr);  //base address
    printf("%d\n",&Arr);  //whole address 
    printf("%d\n",&Arr[0]); //same address of element 1st

    return 0;
}