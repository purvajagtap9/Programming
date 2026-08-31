#include<stdio.h>
//Recusrive

void Display(int Arr[],int iSize)
{
    static int i = 0;

    if(i < iSize)
    {
        i++;
        Display(Arr,iSize);
        printf("%d\n",Arr[i]);        //Invalid Output ahe
    }
}
int main()
{
    int Brr[] = {10,20,30,40,50};
    
    Display(Brr,5);
    return 0;
}