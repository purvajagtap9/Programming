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

class SinglyCL
{
    private :
        PNODE first;
        PNODE last;
        int iCount;

    public :
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo , int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{
    cout<<"Inisde Constructor\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void SinglyCL :: Display()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)     //filter
    {
        return;
    }

    temp = first;    //temp = 100
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;

    } while (last->next != temp);

    cout<<"\n";
}

int SinglyCL :: Count()
{
    return iCount;
}

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    last->next = first;
    iCount++;

}
void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }
    last->next = first;
    iCount++;

}
void SinglyCL :: InsertAtPos(int iNo , int iPos)
{
    int i = 0;
    int iCount = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    iCount = Count();

    if((iPos < 1) || (iPos > iCount+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos = iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        temp = first;
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;

        for(i = 1; i < iPos - 1; i++ )
        {
            temp = temp->next;
        }
    
        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyCL :: DeleteFirst()
{
    int iCount = 0; 
    iCount = Count();

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);

        first = NULL;
        last = NULL;
    }
    else
    {
        first = (first)->next;
        free((last)->next);          //CHANGE 
        (last)->next = first;
    }
}
void SinglyCL :: DeleteLast()
{
    PNODE temp = NULL;
    int iCount = 0;
    iCount = Count();

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);

        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        free(last);           //free(temp->next)
        last = temp;
        (last)->next = first;
    }
}
void SinglyCL :: DeleteAtPos(int iPos)
{
    int i = 0;       //for loop sathi
    int iCount = 0;   //count la call kryala return value sathi
    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count();

    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos = iCount+1)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        free(target);

    }
}

int main()
{
    SinglyCL sobj;

    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.InsertAtPos(105,4);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.DeleteFirst();
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.DeleteLast();
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    sobj.DeleteAtPos(4);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    
    return 0;
}
