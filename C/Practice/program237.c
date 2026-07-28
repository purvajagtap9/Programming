#include<stdio.h>

int main()
{
   char *str = "Ganesh"; 

   //Iteration
   while(*str != '\0')
   {
      printf("%c\n",*str);
      str++;
   }

   return 0;
}