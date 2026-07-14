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
    int ivalue=0; 
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>ivalue;

    iRet = CheckEvenOdd(ivalue);

    if(iRet==0)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }
    return 0;
}