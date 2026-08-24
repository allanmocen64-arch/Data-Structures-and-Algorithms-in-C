#include <stdio.h>

#define SIZE 5

int stack[SIZE];

int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("The Stack is Full\n");
        return;
    }
    top++;
    stack[top] = value;
}

void pop()
{
    if (top == -1)
    {
        printf("The Stack is Empty\n");
        return;
    }
    printf("Removed %d\n", stack[top]);
    top--;
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top: %d\n", stack[top]);
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    int value;

    while (1)
    {
        printf("\n-----STACK MENU-----\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 3)
        {
            peek();
        }
        else if (choice == 4)
        {
            display();
        }
        else if (choice == 5)
        {
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
