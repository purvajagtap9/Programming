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

void Display(PNODE first)   
{
    while(first != NULL)
    {
        printf("%d\t",first->data);
        first = first->next;
    }
    printf("\n");
}

int Count(PNODE first)
{
    return 0;
}

void InsertFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;      //pointer bnla 

    newn = (PNODE)malloc(sizeof(NODE));     //node bnla

    newn->data = iNo;       //pahila hand
    newn->next = NULL;      //dusra hand khishat

    if(*first == NULL)      //LL is empty
    {
        *first = newn;      //head mdhe adrs takla 100 
    }
    else                    //LL contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first , int iNo)
{
    PNODE newn = NULL;      //pointer bnla 

    newn = (PNODE)malloc(sizeof(NODE));     //node bnla

    newn->data = iNo;       //pahila hand
    newn->next = NULL;      //dusra hand khishat

    if(*first == NULL)      //LL is empty
    {
        *first = newn;      //head mdhe adrs takla 100 
    }
    else                    //LL contains atleast 1 node
    {

    }
}

void InsertAtPos(PPNODE first , int iNo , int iPos)
{}

void DeleteFirst(PPNODE first , int iNo)
{}

void DeleteLast(PPNODE first , int iNo)
{}

void DeleteAtPos(PPNODE first , int iNo, int iPos)
{}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,101);   //last la 
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);   //first la

    Display(head);
    
    return 0;

}