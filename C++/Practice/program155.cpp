#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
    int *Arr; //8
    int iSize;  //4

    ArrayX(int X)  
    {

    }

};

int main()
{
    ArrayX aobj;    //ERROR ala karan default constructor nhiye mhnun ala 
    cout<<sizeof(aobj)<<endl;  //16 
    
    return 0;
}