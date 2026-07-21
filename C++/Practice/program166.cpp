#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private :
        int *Arr; 
        int iSize;  

    public :
        ArrayX()    
        { 
            iSize = 5;  
            Arr = new int[iSize];   
        }

        ArrayX(int X)    
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

    ArrayX* aobj1 = new ArrayX();     //default constructor call janr
    ArrayX* aobj2 = new ArrayX(5);    //parameterized constructor call janr
 
    //Function call 

    delete aobj1;
    delete aobj2;

    return 0;
}