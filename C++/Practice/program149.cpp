#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    cout<<"Enter the number of elements "<<"\n";
    cin>>iLength;

    Brr = new int[iLength];  //new calls malloc

    cout<<"Enter the elements"<<"\n";

    for(iCnt =0; iCnt < iLength; iCnt++ )
    {
        cin>>Brr[iCnt];

    }

    cout<<"Elements of the array are : "<<"\n";

    for(iCnt =0; iCnt < iLength; iCnt++ )
    {
        cout<<Brr[iCnt]<<endl;

    }

    delete[]Brr;

    return 0;
}