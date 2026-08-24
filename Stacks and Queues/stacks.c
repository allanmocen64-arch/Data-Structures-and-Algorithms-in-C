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

    push(100);
    push(300);
    push(400);
    display();

    peek();
    pop();
    push(500);
    peek();
    display();

    return 0;
}
