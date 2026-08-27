#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % SIZE == front)
    {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % SIZE;
    }
    queue[rear] = value;
}
void dequeue()
{
    if (front == -1)
    {
        printf("Queue us empty!\n");
        return;
    }
    printf("Removed: %d\n", queue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}
void peek()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Front: %d\n", queue[front]);
}
void display()
{
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);

    return 0;
}