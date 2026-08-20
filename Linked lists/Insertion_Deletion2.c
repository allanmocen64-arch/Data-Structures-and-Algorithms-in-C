#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *node1 = malloc(sizeof(struct Node));
    struct Node *node2 = malloc(sizeof(struct Node));
    struct Node *node3 = malloc(sizeof(struct Node));
    struct Node *node4 = malloc(sizeof(struct Node));

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;
    node4->data = 40;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    // inserting 25

    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = 25;
    newNode->next = node2->next;
    node2->next = newNode;

    // delete 30

    struct Node *temp = newNode->next;
    newNode->next = temp->next;
    free(temp);

    struct Node *current = node1;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    };
    free(node1);
    free(newNode);
    free(node3);
    free(node4);

    return 0;
}