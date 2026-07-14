/*  check whether the given number is even or odd using two methods.-

    Start 
    1. Accept a number from user as no.
    2. If no is completely divsible by 2 then print Even 
    3. otherwise print Odd


    1. Accept a number from user as no.
    2. Divide no by 2 and check the remainder.
    3. If remainder is 0 then print Even
    4. Otherwise print Odd
*/


#include<iostream>
using namespace std;

int main()
{
    int ivalue=0;
    int irem=0;

    cout<<"Enter a number : \n";
    cin>>ivalue;

    irem = ivalue%2;
    
    if(irem==0)
    {
        cout<<"number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }

    return 0;
}