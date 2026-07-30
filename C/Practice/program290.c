#include<stdio.h>

void ReverseDisplay(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    ReverseDisplay(Arr);

    return 0;
}