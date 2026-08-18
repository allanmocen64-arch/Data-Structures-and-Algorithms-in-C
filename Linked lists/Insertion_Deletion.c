#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{

    struct Node *node1;
    struct Node *node2;
    struct Node *node3;

    node1 = malloc(sizeof(struct Node));
    node2 = malloc(sizeof(struct Node));
    node3 = malloc(sizeof(struct Node));

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // insertion of 15

    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = 15;
    newNode->next = node1->next;
    node1->next = newNode;

    // Deletion of 20

    struct Node *temp = newNode->next;
    newNode->next = temp->next;
    free(temp);

    struct Node *current = node1;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    free(node1);
    free(newNode);
    free(node3);

    return 0;
}
