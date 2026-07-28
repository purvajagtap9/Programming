#include<stdio.h>

//drawback - callbyaddress (anyone can change)
void strlenX(char *str)   
{
   *str = 'A';
}

int main()
{
   char Arr[50] = {'\0'};

   printf("Enter string : \n");
   scanf("%[^'\n']s ",Arr);   

   strlenX(Arr); 

   printf("String is  : %s\n",Arr);

   return 0;
}