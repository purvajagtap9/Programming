#include<iostream>
using namespace std;

void CheckEvenOdd(int ino)
{
    int irem=0;

    irem = ino%2;
    
    if(irem==0)
    {
        cout<<"Number is Even\n";
    }
    else
    {
        cout<<"Number is Odd\n";
    }
     
}

int main()
{
    int ivalue=0; 

    cout<<"Enter a number : \n";
    cin>>ivalue;

    CheckEvenOdd(ivalue);
    return 0;
}