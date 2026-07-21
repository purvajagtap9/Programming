#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
    int *Arr; //8
    int iSize;  //4

    ArrayX()    //Default constructor
    {

    }

    ArrayX(int X)    //Parameterized Constructor
    {

    }

};

int main()
{
    ArrayX aobj1; //default la
    ArrayX aobj2(5);  //parametrized laa

    cout<<sizeof(aobj1)<<endl; 
    cout<<sizeof(aobj2)<<endl;   
    
    return 0;
}