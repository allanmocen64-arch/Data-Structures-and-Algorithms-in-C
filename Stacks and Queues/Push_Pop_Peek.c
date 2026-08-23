#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack if full\n");
        return;
    }
    top++;
    stack[top] = value;
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Removed: %d\n", stack[top]);
    top--;
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top: %d", stack[top]);
}

int main()
{
    push(10);
    push(20);
    push(30);

    peek();
    pop();
    push(40);
    peek();

    return 0;
}
