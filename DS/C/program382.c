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
    while(first != NULL)       //while(first != NULL) //TYPE 1
    {
        printf("| %d |->",first->data);   //beautification 
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)      //TYPE 1
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertFirst(PPNODE first , int iNo)
{
    PNODE newn = NULL;      //pointer bnla 

    newn = (PNODE)malloc(sizeof(NODE));     //node bnla

    newn->data = iNo;       //pahila hand
    newn->next = NULL;      //dusra hand khishat

    if(NULL == *first)      //LL is empty
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
    PNODE temp = NULL;      //newn la adrs takayla temp pointer bnvla like xerox 

    newn = (PNODE)malloc(sizeof(NODE));     //node bnla

    newn->data = iNo;       //pahila hand
    newn->next = NULL;      //dusra hand khishat

    if(*first == NULL)      //LL is empty
    {
        *first = newn;      //head mdhe adrs takla 100 
    }
    else                    //LL contains atleast 1 node
    {
        temp = *first;
        while(temp->next != NULL)    //TYPE 2
        {
            temp  = temp-> next;

        }
        temp->next = newn;
    
    }
}

void InsertAtPos(PPNODE first , int iNo , int iPos)
{}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
    {
        return;
    }

    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = (*first)->next;
    }

}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }

    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        while(temp->next->next != NULL)   //TYPE 3
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }

}

void DeleteAtPos(PPNODE first , int iPos)
{}

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

    InsertLast(&head,111);
    InsertLast(&head,121);
    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&head);
    Display(head);
    iRet = Count(head);
    
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    
    printf("Number of nodes are : %d\n",iRet);

    return 0;

} 