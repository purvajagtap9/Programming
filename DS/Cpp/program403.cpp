//OOP
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

class SinglyLL
{
    private :             //*Abstraction
        PNODE first;     //pointer - 8 byte or 4
        int iCount;

    public :
        SinglyLL();      //Constructor
        //Functions 
        void Display();
        int Count();
        void InsertFirst(int No);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL :: SinglyLL()  //Constructor aahe 
{
    cout<<"Inside Constructor\n";
    this->first = NULL;
    this->iCount = 0;     

}

void SinglyLL :: Display()
{}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{}

void SinglyLL :: InsertLast(int iNo)
{}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int iNo)
{}

int main()
{

    SinglyLL sobj;        

    return 0;
} 