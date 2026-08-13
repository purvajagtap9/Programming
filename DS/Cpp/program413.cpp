//OOP - Doubly LL
#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;    //$

};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyLL
{
    private :             //*Abstraction
        PNODE first;     //pointer - 8 byte or 4
        int iCount;

    public :
        DoublyLL();      //Constructor
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

DoublyLL :: DoublyLL()  //Constructor  
{
    cout<<"Inside Constructor\n";
    this->first = NULL;
    this->iCount = 0;     

}

void DoublyLL :: Display()
{
    PNODE temp = NULL;
    temp = this->first;

    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
        
    }
}

int DoublyLL :: Count()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{}

void DoublyLL :: InsertLast(int iNo)
{}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{}

void DoublyLL :: DeleteFirst()
{}

void DoublyLL :: DeleteLast()
{}

void DoublyLL :: DeleteAtPos(int iNo)
{}

int main()
{

    DoublyLL dobj;        

    return 0;
} 