/*  Algorithm
   START
      Accept first number as NO1
      Accept second numnber as No1
      Perform addition of No1 & No2
      Display the result
   STOP

*/
#include<stdio.h>

int main()
{
   float i,j,k;

   printf("Enter first number : \n");
   scanf("%f",&i);

   printf("Enter second number : \n");
   scanf("%f",&j);

   k = i + j;

   printf("Addition is : %f\n",k);

   return 0;
}