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
    if(first != NULL)
    {
        printf("| %d |->",first->data);   //beautification 
        first = first->next;
        Display(first);
    }
}

int Count(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        first = first->next;
        Count(first);
    }
    return iCount;
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

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);   //last la 
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);   //first la

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);
    
    return 0;

}