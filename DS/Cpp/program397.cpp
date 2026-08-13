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

int main()
{
    PNODE newn = NULL;     //pointer

    //newn = (PNODE)malloc(sizeof(NODE));  --> c mdhe
    newn = new NODE;

    newn->data = 11;      //shirt vr lihila 11
    newn->next = NULL;

    cout<< newn->data << endl;
    
    //free(newn);   --->c mdhe
    delete newn;

    return 0;
}