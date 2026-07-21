#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private :
        int *Arr; 
        int iSize;  

    public :
        ArrayX(int X = 5)   //accepts 1 integer but if not given it will consider 5 parameterized constructor with default agrgument AND overide krnr 5 la
        { 
            iSize = X;  
            Arr = new int[iSize];   
        }

        ~ArrayX()   
        {
            delete[]Arr;   
        }

};

int main()
{  
    ArrayX* aobj1 = new ArrayX();     //parameterized constructor lach call janr
 
    ArrayX* aobj2 = new ArrayX(15);    //parameterized constructor call janr
 
    //Function call 

    delete aobj1;
    delete aobj2;

    return 0;
}