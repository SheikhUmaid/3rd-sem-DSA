#include <stdio.h>

// in this i am seeing how to create a linked list

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("memory allocation failled");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d-> ", temp->data);
        temp = head->next;
    }
}

void addAtLast(struct Node **head, int data)
{
    struct Node *node = createNode(data);
    if (*head == NULL) {
        *head = node;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node;
    }
}

int main()
{
    struct Node *node = createNode(10);
    addAtLast(node, 10);
    display(node);
    return 0;
}
