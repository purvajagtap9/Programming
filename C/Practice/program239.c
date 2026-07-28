#include<stdio.h>
#include<string.h>

int main()
{
   char *str = "Ganesh"; 
   int iCount = 0;
   
   printf("Length is string : %d\n",strlen(str));

   while(*str != '\0')
   {
      iCount++;
      str++;
   }

   printf("Length is string : %d\n",iCount);

   return 0;
}