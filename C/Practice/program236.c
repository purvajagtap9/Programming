#include<stdio.h>

int main()
{
   char *str = "Ganesh"; //char str[]="Ganesh"
   
   //Sequence
   printf("%c\n",*str);
   str++;

   printf("%c\n",*str);
   str++;

   printf("%c\n",*str);
   str++;

   printf("%c\n",*str);
   str++;

   printf("%c\n",*str);
   str++;

   printf("%c\n",*str);
   str++;     // \0 laa janar

   return 0;
}