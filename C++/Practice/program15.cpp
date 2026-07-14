#include<iostream>
using namespace std;

bool CheckEvenOdd(int ino)
{
    int iRem=0;

    iRem = ino%2;
    
    if(iRem==0)
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

    cout<<"Enter a number : \n";
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