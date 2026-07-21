#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
    int *Arr; //8
    int iSize;  //4

};

int main()
{
    ArrayX aobj; 
    cout<<sizeof(aobj)<<endl;  //16 
    
    return 0;
}