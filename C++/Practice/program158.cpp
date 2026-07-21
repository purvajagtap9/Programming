#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
    int *Arr; 
    int iSize;  


    ArrayX(int X)    //Parameterized Constructor
    { 
        iSize = X;  //characteristics initialization
        Arr = new int[iSize];   //resource allocation
        cout<<"Inside Constructor"<<"\n";
    }

    ~ArrayX()   //Destructor
    {
        cout<<"Inside Destructor"<<"\n";
        delete[]Arr;   //resource deallocation
    }

};

int main()
{
    ArrayX aobj1(5);  
     
    return 0;
}