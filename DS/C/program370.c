//TEMPLATE CONTENT
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)   //callbyvalue (head(100))
{

}

int Count(PNODE first)     //callbyvalue (head(100))
{
    return 0;
}

void InsertFirst(PPNODE first , int iNo)    //callbyaddress(&head)
{

}

void InsertLast(PPNODE first , int iNo)     //callbyaddress(&head)
{

}

void InsertAtPos(PPNODE first , int iNo , int iPos)     //callbyaddress(&head)
{

}

void DeleteFirst(PPNODE first , int iNo)     //callbyaddress(&head)
{

}

void DeleteLast(PPNODE first , int iNo)     //callbyaddress(&head)
{

}

void DeleteAtPos(PPNODE first , int iNo, int iPos)    //callbyaddress(&head)
{

}

int main()
{
    PNODE head = NULL;

    return 0;

}