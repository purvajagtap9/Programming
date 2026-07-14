//////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//
// Function Name : AddTwoNumbers
// Input :         float,float
// Output :        float
// Description :   Performs addition of 2 floats
// Date :          23/05/2026
// Author :        Purva Kachrudas Jagtap
//
//////////////////////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNo1,     //First Input
                        float fNo2      //Second input
                   )
{
    float fAns = 0.0f;                  //Variable to store result
    fAns = fNo1 + fNo2;                 //Perform Addition
    return fAns;                         
}
//////////////////////////////////////////////////////////////////////////
//
//  Application to perform addition of 2 float values
//
//////////////////////////////////////////////////////////////////////////

int main()
{
   float fValue1 = 0.0f;                //To store first input
   float fValue2 = 0.0f;                //To store second input
   float fResult = 0.0f;                //To store the result

   cout<<"Enter first number : \n";
   cin>>fValue1;

   cout<<"Enter second number : \n";
   cin>>fValue2;

   fResult = AddTwoNumbers(fValue1, fValue2);

   cout<<"Addition is : "<<fResult<<"\n";

   return 0;
}

//////////////////////////////////////////////////////////////////////////
//
// Input  :   10.0    11.0
// Output :   21.0
//
//////////////////////////////////////////////////////////////////////////