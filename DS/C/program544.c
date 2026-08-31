#include<stdio.h>
//STRING

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("%s\n",Arr);

    return 0;
}