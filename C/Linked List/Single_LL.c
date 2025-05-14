#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* Create_Node(int data);
void Traverse(Node* pHead);
int Length(Node* pHead);
Node* InsertAtBeginning(Node** pHead, int data);
Node* InsertAtPos(Node** pHead, int data, int pos);
Node* InsertAtEnd(Node** pHead, int data);
void DeleteFirst(Node** pHead);
void DeletePos(Node** pHead, int pos);
void DeleteEnd(Node** pHead);

Node* Create_Node(int data)
{
    Node* New_Node = (Node*)malloc(sizeof(Node));
    if(New_Node == NULL)
    {
        printf("Memory Allocation Failed");
        return NULL;
    }
    New_Node->data = data;
    New_Node->next = NULL;
    return New_Node;
}
void Traverse(Node* pHead)//
{
    Node* temp = pHead;
    if(temp == NULL)
    {
        printf("Linked list is Empty");
    }
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("null\n");
}
int Length(Node* pHead)
{
    int count = 0;
    Node* temp = pHead;
    if(temp == NULL)
    {
        printf("Linked List is Empty");
        return 0;
    }
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool Search(Node** pHead, int Key)
{
    Node* temp = *pHead;
    while(temp->next != NULL)
    {
        if(temp->data == Key)
        {
            printf("Key found: %d", temp->data);
            return true;
            break;
        }
        temp = temp->next;
    }
}
Node* Reverse(Node** pHead)
{
    //reverse of the list
}
Node* MergeSort(Node** pHead)
{
    //merge sort
}
Node* InsertionSort(Node** pHead)
{
    //insertion sort
}
Node* BubbleSort(Node** pHead)
{
    //bubble sort
}
Node* Middle(Node** pHead)
{
    //middle node in the list
}
Node* Nth_Begin(Node** pHead)
{
    //Nth node from the beginning
}
Node* Nth_End(Node** pHead)
{
    //Nth node from the end
}
Node* Max()
{
    //Min value in the node
}
Node* Min()
{
    //Min value in the node
}
bool Empty()
{
    //Check if list is Empty
}
bool Sorted()
{
    //Check if the list is Sorted
}
bool Duplicates()
{
    //Check for duplicate values
}
void Clear()
{
    //Deleting entire list
}
Node* Loop()
{
    //Detect and remove loops(Floyd’s Cycle Detection)
}
Node* Merge()
{
    //Merge 2 sorted linked lists
}
Node* Intersection()
{
    //
}
Node* Difference()
{

}
bool Palindrome()
{

}
Node* Rotate()
{

}
Node* Swap()
{

}
Node* InsertAtBeginning(Node** pHead, int data)//
{
    Node* New_Node = Create_Node(data);
    if(New_Node == NULL)
        return NULL;
    New_Node->next = *pHead;
    *pHead = New_Node;
}
Node* InsertAtPos(Node** pHead, int data, int pos)//
{
    Node* New_Node = Create_Node(data);
    Node* temp = *pHead;
    if(New_Node == NULL)
    {
        return NULL;
    }
    if(pos == 1)
    {
        New_Node->next = *pHead;
        *pHead = New_Node;
        return NULL;
    }
    if(*pHead == NULL)
    {
        *pHead = New_Node;
        return(New_Node);
    }
    for(int i=1; i<pos-1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Out of Bounds\n");
        free(New_Node);
        return NULL;
    }
    New_Node->next = temp->next;
    temp->next = New_Node;
}
Node* InsertAtEnd(Node** pHead, int data)//
{
    Node* New_Node = Create_Node(data);
    Node* temp = *pHead;
    if(New_Node == NULL)
    {
        return NULL;
    }
    if(*pHead == NULL)
    {
        *pHead = New_Node;
        return New_Node;
    }
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = New_Node;
}
Node* InsertBef(Node** pHead, int data, int pos)
{
    //insertion before the given node
}
Node* InsertAf(Node** pHead, int data, int pos)
{
    //insertion after the given node
}
void DeleteFirst(Node** pHead)
{
    Node* temp = *pHead;
    if(*pHead == NULL)
    {
        printf("List is Empty\n");
    }
    *pHead = (*pHead)->next;
    free(temp);
}
void DeletePos(Node** pHead, int pos)
{
    Node* DelNode;
    if(*pHead == NULL)
    {
        printf("List is Empty\n");
        return;    
    }
    Node* temp = *pHead;
    Node* prev = NULL;
    int Size = Length(*pHead);
    if(pos<1 || pos>Size)
    {
        printf("Error! Out of Bounds\n");
        return;
    }
    if(pos == 1)
    {
        *pHead = temp->next;
        free(temp);
        return;
    }
    for(int i=1; i<pos-1 && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL)
    {
        printf("Error: Node does not exist\n");
        return;
    }
    DelNode = temp->next;
    temp->next = DelNode->next;
    free(DelNode);
}
void DeleteEnd(Node** pHead)
{
    Node* temp = *pHead;
    if(*pHead == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    if((*pHead)->next == NULL)
    {
        free(*pHead);
        *pHead == NULL;
        return;
    }
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
void DeleteVal(Node** pHead)
{
    //deleting a node thru its value
}
int main()
{
    Node* head = NULL;
    int choice, data, pos, Key;
    while(1)
    {
        printf("Menu:\n");
        printf("Enter 1 for Inserting at the beginning:\n");
        printf("Enter 2 for Inserting at any position:\n");
        printf("Enter 3 for Inserting at the end:\n");
        printf("Enter 4 for Deleting the First Element:\n");
        printf("Enter 5 for Deleting from any position:\n");
        printf("Enter 6 for Deleting from the Last Element:\n");
        printf("Enter 7 for Counting the Length of the Linked List:\n");
        printf("Enter 8 for Searching an element in the list:\n");
        printf("Enter 9 for Traversing the list:\n");
        printf("Enter 10 for Exiting:\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter data to be inserted at the beginning: ");
                scanf("%d", &data);
                InsertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter data to be inserted at a position: ");
                scanf("%d", &data);
                printf("Enter position where the data needs to be inserted: ");
                scanf("%d", &pos);
                InsertAtPos(&head, data, pos);
                break;
            case 3:
                printf("Enter data to be inserted at the end: ");
                scanf("%d", &data);
                InsertAtEnd(&head, data);
                break;
            case 4:
                printf("Deleting the First Element...\n");
                DeleteFirst(&head);
                break;
            case 5:
                printf("Enter position to delete from: ");
                scanf("%d", &pos);
                DeletePos(&head, pos);
                break;
            case 6:
                printf("Deleting the Last Element...\n");
                DeleteEnd(&head);
                break;
            case 7:
                printf("Length of the Linked List: %d\n", Length(head));
                break;
            case 8:
                printf("Enter element to Search: ");
                scanf("%d", &Key);
                Search(&head, Key);
                break;
            case 9:
                printf("Traversing the list: ");
                Traverse(head);
                break;
            case 10:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid Input! Please try again.\n");
                break;
        }
    }
    return 0;
}