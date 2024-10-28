#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int stack[MAX];
int top=-1;
void push(int value)
{
    if (top==MAX-1)
    {
        printf("Stack Overflow! Cannot push %d\n", value);
    }
    else
    {
        stack[++top]=value;
        printf("%d pushed to stack\n", value);
    }
}
void pop()
{
    if (top==-1)
    {
        printf("Stack Underflow! No elements to pop\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top--]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack contents: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice, value;
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display Stack Content\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to push:");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting\n");
            exit(0);
        }
    }
    return 0;
}
