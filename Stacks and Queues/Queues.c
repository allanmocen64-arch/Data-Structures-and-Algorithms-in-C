#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is Full\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Removed: %d\n", queue[front]);
    front++;
}

void peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Front: %d\n", queue[front]);
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();

    enqueue(40);

    peek();

    return 0;
}