#include<stdio.h>

void CheckEvenOdd(int ino)
{
    int irem=0;

    irem = ino%2;
    
    if(irem==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
     
}

int main()
{
    int ivalue=0; //only for main function local function

    printf("Enter a number : \n");
    scanf("%d",&ivalue);

    CheckEvenOdd(ivalue);
    return 0;
}