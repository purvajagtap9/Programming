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
    this->first = NULL;
    this->iCount = 0;     

}

void SinglyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    while(temp != NULL)       //Type 1
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;        //pointer

    newn = new NODE;         //malloc zhla

    newn->data = iNo;        //shirt vr number takla
    newn->next = NULL;       //hand khali 

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;      //new valyala bolla tu 1st ahe 
        this->first = newn;            //sir la sngitla
    }

    this->iCount++;          //IMPP

}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;        //pointer
    PNODE temp = NULL;

    newn = new NODE;         //malloc zhla

    newn->data = iNo;        //shirt vr number takla
    newn->next = NULL;       //hand khali 

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
        while(temp->next != NULL)       //Type 2
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCount++;          //IMPP
}

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

    int iRet = 0;

    SinglyLL sobj;  

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();   
    iRet = sobj.Count();
    cout<<"Number of elemnts are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();   
    iRet = sobj.Count();
    cout<<"Number of elemnts are : "<<iRet<<endl;

    return 0;
} 