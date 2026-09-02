#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
                free(newn);        //duplicate ahe mg tychi memory krun free bhett
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

bool Search(PNODE first, int iNo)
{
    bool bFlag = false;

    while(first != NULL)
    {
        if(iNo == first->data)
        {
            bFlag = true;
            break;
        }
        else if(iNo > first->data)
        {
            first = first->rchild;
        }
        else if(iNo < first->data)
        {
            first = first->lchild;
        }

    }
    return bFlag;
}

int CountLeaf(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        if(first->lchild == NULL && first->rchild == NULL)   //doni condition true asel trch 
        {
            iCount++;
        }
        CountLeaf(first->lchild);
        CountLeaf(first->rchild);

    }
    return iCount;
}

int CountParent(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        if(first->lchild != NULL || first->rchild != NULL)   //doni peki 1 condition true asel trch 
        {
            iCount++;
        }
        CountParent(first->lchild);
        CountParent(first->rchild);

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
    Insert(&head,21);
    Insert(&head,4);
    Insert(&head,7);
    Insert(&head,15);


    printf("Inorder Display : \n");
    Inorder(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    if(Search(head,25) == true)
    {
        printf("25 is present in BST\n");
    }
    else 
    {
        printf("25 is not present in BST\n");
    }

    iRet = CountLeaf(head);
    printf("Number of leaf nodes are : %d\n",iRet);

    iRet = CountParent(head);
    printf("Number of parent nodes are : %d\n",iRet);

    return 0;
}