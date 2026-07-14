/*Algorithm
   START
      Accept first number as No1
      Accept second numnber as No1
      Perform addition of No1 & No2
      Display the result
   STOP

*/
#include<iostream>
using namespace std;

int main()
{
   float i=0.0f,j=0.0f,k=0.0f;   //variable creation with default values

   cout<<"Enter first number : \n";
   cin>>i;

   cout<<"Enter second number : \n";
   cin>>j;

   k = i + j;

   cout<<"Addition is : "<<k<<"\n";

   return 0;
}