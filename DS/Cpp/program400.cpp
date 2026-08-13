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
typedef struct node **PPNODE;

class SinglyLL
{
    public :
        PNODE first;     //pointer - 8 byte or 4
        int iCount;

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
            this->iCount = 0;       
        }
};

int main()
{

    SinglyLL sobj;

    //5 nodes

    sobj.first = NULL;     //Drawback
    sobj.iCount = 15;     //Drawback misbehave krnr nodes 15 ahe as smjel


    return 0;
} 