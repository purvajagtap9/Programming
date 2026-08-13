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
    private :
        PNODE first;     //pointer - 8 byte or 4
        int iCount;

    public :
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

    sobj.first = NULL;       //Error - private access specifer ahe vrti
    //Error - private access specifer ahe vrti
    sobj.iCount = 15;        


    return 0;
} 