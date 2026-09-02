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

//l  D  r
void Inorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->lchild);      //L
        printf("%d\n",first->data);  //D
        Inorder(first->rchild);      //R

    }
}

//D l r
void Preorder(PNODE first)
{
    if(first != NULL)
    {
        printf("%d\n",first->data);  //D
        Preorder(first->lchild);      //L
        Preorder(first->rchild);      //R

    }
}

//l  r  D
void Postorder(PNODE first)
{
    if(first != NULL)
    {
        Postorder(first->lchild);      //L
        Postorder(first->rchild);      //R
        printf("%d\n",first->data);    //D
    }
}

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

int Count(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        Count(first->lchild);
        Count(first->rchild);
    }

    return iCount;
}

int main()
{
    PNODE head = NULL; 
    int iRet = 0;

    Insert(&head,11);       //ROOT zhala 
    Insert(&head,5);
    Insert(&head,17);

    printf("Inorder Display : \n");
    Inorder(head);

    printf("Preorder Display : \n");
    Preorder(head);

    printf("Postorder Display : \n");
    Postorder(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}