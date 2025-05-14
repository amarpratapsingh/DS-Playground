#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Size 5
int top = -1;
int Stack[Size];

bool isFull()
{
    if(top == Size-1)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if(top == -1)
        return true;
    else
        return false;
}
int Push(int data)
{
    if(!isFull())
    {
        top = top+1;
        Stack[top] = data;
    }
}
void Pop()
{
    if(!isEmpty())
    {
        top = top - 1;
    }
}
int Peek()
{
    return(top);
}
void Display()
{
    printf("Stack:\n");
    for(int i=Size; i>=0; i--)
    {
        printf("%d",Stack[i]);
    }
    printf("\n");
}
int main()
{
    int choice, data;
    while(1)
    {
        printf("Menu:\n");
        printf("Enter 1 for Pushing into Stack:\n");
        printf("Enter 2 for Popping from the Stack:\n");
        printf("Enter 3 for Getting the Top Element:\n");
        printf("Enter 4 for Displaying the Stack:\n");
        printf("Enter 5 for Exiting:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                Push(data);
                break;
            case 2:
                Pop();
                break;
            case 3:
                printf("Top element: %d", Peek());
                break;
            case 4:
                Display();
                break;
            case 5:
                printf("Exiting...");
                exit(1);
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }
    return 0;
}