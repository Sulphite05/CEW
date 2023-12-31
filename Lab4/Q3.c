// Write a C program that converts a singly linked list into an array and returns it

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed!");
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *insertAfter(struct Node *head, int data, int search)
{
    struct Node *current = head;
    while (current != NULL && current->data != search)
    {
        current = current->next;
    }
    if (current->data == search)
    {
        struct Node *new = createNode(data);
        new->next = current->next;
        current->next = new;
    }
    else
    {
        printf("Node not found!\n");
    }
    return head;
}

int nodeCount(struct Node* head){
    struct Node* current = head;
    int count = 0;
    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

struct Node *printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    return head;
}

int main()
{
    struct Node *head = createNode(1);
    insertAfter(head, 2, 1);
    insertAfter(head, 3, 2);
    printList(head);
    int arr[50], i = 0, count = nodeCount(head); 
    struct Node *temp = head;
    while(temp!=NULL){
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }
    for(int i = 0; i < count; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
