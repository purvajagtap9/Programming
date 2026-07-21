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
    //Static mmeory allocation for object
    //ArrayX aobj1(5);  

    ArrayX* aobj = new ArrayX(5);

    delete aobj;

    cout<<"End of main"<<endl;

    return 0;
}