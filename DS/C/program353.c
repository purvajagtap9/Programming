#include<stdio.h>
#pragma pack(1)

//smallest linkedlist
struct node 
{
    int data;
    struct node *next;

};

int main()
{
    struct node obj;

    obj.data = 11;
    obj.next = NULL;

    printf("%d\n",obj.data);  
    printf("%d\n",obj.next);     //0

    return 0;
}