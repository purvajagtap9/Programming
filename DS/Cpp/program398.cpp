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

        SinglyLL()
        {
            cout<<"Inside Constructor\n";
            this->first = NULL;
            
        }
};

int main()
{

    SinglyLL sobj;

    return 0;
}