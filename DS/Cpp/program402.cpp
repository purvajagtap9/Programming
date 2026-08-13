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
        SinglyLL()       //Constructor
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
            this->iCount = 0;       
        }

        void Display()
        {}

        int Count()
        {
            return this->iCount;
        }

        void InsertFirst(int No)
        {}

        void InsertLast(int iNo)
        {}

        void InsertAtPos(int iNo, int iPos)
        {}

        void DeleteFirst()
        {}

        void DeleteLast()
        {}

        void DeleteAtPos(int iPos)
        {}
};

int main()
{

    SinglyLL sobj;        

    return 0;
} 