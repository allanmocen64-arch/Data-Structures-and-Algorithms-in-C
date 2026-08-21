#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{
    struct Node *head = NULL;
    struct Node *current = NULL;

    for (int i = 1; i <= 4; i++)
    {
        struct Node *newNode = malloc(sizeof(struct Node));

        newNode->data = i * 10;
        newNode->prev = current;
        newNode->next = NULL;

        if (current != NULL)
        {
            current->next = newNode;
        }
        else
        {
            head = newNode;
        }
        current = newNode;
    }

        while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->prev;
    }

    return 0;
}