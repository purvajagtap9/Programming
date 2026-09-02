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

        void Accept();
        void Display();

};

Searching :: Searching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];     //dynamic memory allocation
}

void Searching :: Accept()
{
    int i = 0;
    cout<<"Enter the elements : \n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Searching :: Display()
{
    int i = 0;
    cout<<"Elements of the array are : \n";

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

Searching :: ~Searching()
{
    delete []Arr;
}

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();
    
    return 0;
}