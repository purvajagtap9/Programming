#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class SinglyCL
{
    private :
        PNODE first;
        PNODE last;
        int iCount;

    public :
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{
    cout<<"Inisde Constructor\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void SinglyCL :: Display()
{

}

int SinglyCL :: Count()
{
    return iCount;
}

void SinglyCL :: InsertFirst(int iNo)
{

}
void SinglyCL :: InsertLast(int iNo)
{

}
void SinglyCL :: InsertAtPos(int iNo , int iPos)
{

}

void SinglyCL :: DeleteFirst()
{

}
void SinglyCL :: DeleteLast()
{

}
void SinglyCL :: DeleteAtPos(int iPos)
{
    
}

int main()
{
    SinglyCL sobj;
    
    return 0;
}
