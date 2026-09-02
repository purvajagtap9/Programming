#include<iostream>
using namespace std;

class Searching
{
    private :
        int *Arr;
        int iSize;

    public :
        Searching(int iNo);   //constructor
        ~Searching();         //destructor

};

Searching :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];     //dynamic memory allocation
}

Searching :: ~Searching()
{
    delete []Arr;
}
int main()
{
    Searching sobj(5);
    return 0;
}