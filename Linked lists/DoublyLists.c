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
    struct Node *node1 = malloc(sizeof(struct Node));
    struct Node *node2 = malloc(sizeof(struct Node));
    struct Node *node3 = malloc(sizeof(struct Node));

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->prev = NULL;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = NULL;

    struct Node *current = node1;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
        break;
    }

    current = node3;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->prev;
    }

    free(node1);
    free(node2);
    free(node3);

    return 0;
}