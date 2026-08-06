#include<stdio.h>
#pragma pack(1)

struct node 
{
    int data;
    struct node *next;

};

int main()
{
    struct node obj;

    printf("%d\n",sizeof(obj));   //12 //4(int) +  8(pointer) = 12

    return 0;
}