#include<iostream>
using namespace std;

int CheckEvenOdd(int ino)
{
    int irem=0;

    irem = ino%2;
    
    return irem;
     
}

int main()
{
    int iValue=0; 
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    iRet = CheckEvenOdd(iValue);

    if(iRet==0)
    {
        cout<<"Number is Even\n"<<iValue;
    }
    else
    {
        cout<<"Number is Odd\n"<<iValue;
    }
    return 0;
}