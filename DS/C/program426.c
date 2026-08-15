#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    do
    {
        printf("| %d |->",first->data);
        first = first->next;
    } while (first != last->next);

    printf("\n");
}

int Count(PNODE first,PNODE last)
{
    int iCount = 0;
    if(first == NULL && last == NULL)     //filter 
    {
        return iCount;
    }
    do
    {
        iCount++;
        first = first->next;
    } while (first != last->next);

    return iCount;
}

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
    (*last)->next = *first;

}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

    }
    else
    {
        (*last)->next = newn;
        *last = (*last)->next;
    }
    (*last)->next = *first;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    int i = 0;       //for loop sathi
    int iCount = 0;   //count la call kryala return value sathi
    PNODE temp = NULL;
    PNODE newn = NULL;

    iCount = Count(*first,*last);

    if((iPos < 1) || (iPos = iCount+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos = iCount+1)
    {
        InsertLast(first,last,iNo);
    }
    else
    {
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}
void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*last)->next);          //CHANGE 
        (*last)->next = *first;
    }

}

void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next != *last)
        {
            temp = temp->next;
        }

        free(*last);           //free(temp->next)
        *last = temp;
        (*last)->next = *first;
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    
}


int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&head,&tail);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head,&tail);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&head,&tail,105,4);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are : %d\n",iRet);

    return 0;

}

  