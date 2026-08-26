#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Stack
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        Stack();
        void Push(T iNo);     // InsertFirst
        T Pop();              // DeleteFirst
        T Peep();             // DeleteFirst
        void Display();
        int Count();
};

template <class T>
Stack<T> :: Stack()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void Stack<T> :: Push(T iNo)  
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>();

    newn->data = iNo;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    iCount++;
}

template <class T>
T Stack<T> :: Pop()      
{
    T iValue = 0;
    struct node<T> *temp = NULL;

    if(first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
        temp = first;

        first = first->next;
        delete temp;

        iCount--;

        return iValue;
    }
}

template <class T>
T Stack<T> :: Peep()             
{
    T iValue = 0;

    if(first == NULL)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
        return iValue;
    }
}

template <class T>
void Stack<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp = temp ->next;
    }
}

template <class T>
int Stack<T> :: Count()
{
    return iCount;
}

int main()
{
    Stack <int> sobj;
    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);
    
    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Elements of the stack are : "<<iRet<<"\n";
    
    iRet = sobj.Pop();

    cout<<"Poped element is : "<<iRet<<"\n";

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Elements of the stack are : "<<iRet<<"\n";
    
    iRet = sobj.Peep();

    cout<<"Peeped element is : "<<iRet<<"\n";

    sobj.Display();
    
    iRet = sobj.Count();

    cout<<"Elements of the stack are : "<<iRet<<"\n";
    
    return 0;
}