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
{
    int iCount = 0;    //mojyala 
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount+1))    //Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(first,iNo);        //Reusability
    }
    else if(iPos == iCount+1)
    {
        InsertLast(first,iNo);         //Reusability
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));  

        newn -> data = iNo;
        newn -> next = NULL;

        temp = *first;

        for(i = 1; i<iPos-1;i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }   

}

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
{
    int iCount = 0;    //mojyala 
    int i = 0;
    iCount = Count(*first);


    if((iPos < 1) || (iPos > iCount))    //Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(first);       //Reusability
    }
    else if(iPos == iCount)
    {
        DeleteLast(first);       //Reusability
    } 
    else
    {
        
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

    InsertAtPos(&head,105,4);
    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    return 0;

} 