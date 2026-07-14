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

    cout<<"Enter a number to check whether it is Even or Odd: ";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet)
    {
        cout<<"%d is Even Number\n",iValue;
    }
    else
    {
        cout<<"%d is Odd Number\n",iValue;
    }
    return 0;
}