#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void insert(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            /* code */
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Successfully Inserted");
    printf("\n");
}
void traverse(struct Node *head)
{
    if (head == NULL)
    {
        /* code */
        printf("Doubly Linked List is Empty.");
        printf("\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int search(struct Node *head, int data)
{
    int isFound = 0;
    if (head == NULL)
    {
        /* code */
        printf("Doubly Linked List is empty.");
        printf("\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        if (temp->data == data)
        {
            /* code */
            isFound = 1;
            return isFound;
            break;
        }
        temp = temp->next;
    }
    return isFound = -1;
}
int main()
{
    int choice, data, toSearch, isFound;
    struct Node *head = NULL;
    while (1)
    {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert\n");
        printf("2. Traverse\n");
        printf("3. Search\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &data);
            insert(&head, data);
            break;
        case 2:
            traverse(head);
            break;
        case 3:
            printf("Enter the value to search: ");
            scanf("%d", &toSearch);
            isFound = search(head, toSearch);
            if (isFound == -1)
            {
                printf("Not Found.");
                printf("\n");
            }
            else
            {
                printf("Found.");
                printf("\n");
            }
            break;
        case 0:
            printf("Thankss");
            exit(0);
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}