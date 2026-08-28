#include<stdio.h>
//Recursive (explain on book stackframe)
void Display(int iNo)
{
    static int i = 1;   //storage class 
    
    if(i <= iNo)
    {
       printf("%d\n",i);
       i++;
       Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End of main\n");

    return 0;
}