#include<stdio.h>


void Display(char *str)   
{
   printf("%c\n",*str);
   str++;

   printf("%c\n",*str);
   str++;

   printf("%c\n",*str);
   str++;
}
int main()
{
   char Arr[50] = {'\0'};

   printf("Enter string : \n");
   scanf("%[^'\n']s ",Arr);   

   Display(Arr);  //100 adrs pthvla

   return 0;
}