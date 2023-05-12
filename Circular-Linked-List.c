#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void insert(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        newNode->next = *head;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != *head)
        {
            /* code */
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
    printf("Successfully Inserted");
    printf("\n");
}
void traverse(struct Node *head)
{
    if (head == NULL)
    {
        printf("Circular Linked List is empty");
        printf("\n");

        return;
    }
    else
    {
        printf("Elements in Circular Linked List are \n");
        struct Node *temp = head;
        do
        {
            /* code */
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);

        printf("\n");
    }
}
int search(struct Node *head, int data)
{
    int index = 0;
    if (head == NULL)
    {
        printf("Circular Linked List is empty.");
        printf("\n");
    }
    struct Node *temp = head;
    do
    {
        /* code */
        if (temp->data == data)
        {
            index = 1;
            return index;
            break;
        }
        temp = temp->next;
    } while (temp != head);

    return -1;
}

int main()
{
    int choice, data, toSearch, isFound;
    struct Node *head = NULL;

    while (1)
    {
        printf("\nCircular Linked List Operations:\n");
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