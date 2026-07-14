#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckEvenOdd(int ino)
{   
    if((ino%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    } 
     
}

int main()
{
    int iValue=0; 
    bool bRet=false;

    cout<<"Enter a number to check whether it is Even or Odd: \n";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet==true)
    {
        cout<<"Number is Even\n"<<iValue;
    }
    else
    {
        cout<<"Number is Odd\n"<<iValue;
    }
    return 0;
}