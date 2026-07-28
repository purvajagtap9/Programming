#include<stdio.h>

int CountSmall(const char * str)   
{
   int iCount = 0;

   while(*str != '\0')
   {
      if(*str >= 97 && *str <= 122)  //count small a to z , bad programming dont use ascii
      {
         iCount++;
      }
      str++;  
   } 
   return iCount;
}

int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;

   printf("Enter string : \n");
   scanf("%[^'\n']s ",Arr);   

   iRet = CountSmall(Arr); 

   printf("Vowels are : %d\n",iRet);

   return 0;
}