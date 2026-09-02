#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;
        
        while(1)
        {
            if(iNo > temp->data)      //motha asel tr Right 
            {
                if(temp->rchild == NULL)  
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;          
            }

            else if(iNo < temp->data)        //chota asel tr Left
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }

            else if(iNo == temp->data)
            {
                printf("Unable to insert as element is Duplicate \n");
                free(newn);        //duplicate ahe mg tychi memory kdun free bhett
                break;
            }

        }
    }
}

int main()
{
    PNODE head = NULL; 

    Insert(&head,11);       //ROOT zhala 
    Insert(&head,5);
    Insert(&head,17);

    return 0;
}