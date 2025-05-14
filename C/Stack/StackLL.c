#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Stack
{
    int data;
    struct Node* next;
}Node;

Node* Push(Node**,int);

Node* Create(int data)
{
    Node* New_Node;
    New_Node = malloc(sizeof(Node));
    if(New_Node == NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    New_Node->data = data;
    New_Node->next = NULL;
    return New_Node;
}
bool isEmpty(Node* pHead)
{
    while(pHead->next == NULL)
    {
        return true;
    }
}
Node* Push(Node** pHead, int data)
{
    Node* New_Node = Create(data);
    if(*pHead == NULL)
    {
        printf("Stack is Empty");
        return 0;
    }
    New_Node->next = *pHead;
    *pHead = New_Node;
}
Node* Pop(Node** pHead)
{
    if(!isEmpty(pHead))
    {
        
    }
}

int main()
{
    Node* Head = NULL;
    int choice, data;
    while(1)
    {
        printf("Menu:\n");
        printf("Enter 1 for Pushing in Stack:\n");
        printf("Enter 2 for Popping:\n");
        printf("Enter 3 for Peeking:\n");
        printf("Enter 4 for Display:\n");
        printf("Enter 5 for Exiting:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                Push(&Head,data);
                break;
        }
    }
    return 0;
}