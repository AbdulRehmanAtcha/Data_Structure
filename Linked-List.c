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
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Successfull Insertion \n");
    printf("\n");
};
void traverse(struct Node *head)
{
    if (head == NULL)
    {
        printf("Emptyyy \n");
        return;
    }
    else if (head != NULL)
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
    printf("\n");
}

int main()
{
    int choice, data;
    struct Node *head = NULL;

    while (1)
    {
        printf("\nLinked List Operations:\n");
        printf("1. Insert\n");
        printf("2. Traverse\n");
        printf("3. Exit\n");
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
            exit(0);
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }



    return 0;
}