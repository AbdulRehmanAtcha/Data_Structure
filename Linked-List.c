#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
struct Node* search(struct Node *head, int data)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            return temp;
            /* code */
        }
        temp = temp->next;
    
    }
    
    
}

int main()
{
    int choice, data, toSearch;
    struct Node *head = NULL;
    struct Node* searchResult;

    while (1)
    {
        printf("\nLinked List Operations:\n");
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
            printf("Enter the number you wants to search: ");
            scanf("%d", &toSearch);
            searchResult = search(head, toSearch);
            if (searchResult != NULL)
            {
                /* code */
                printf("Found");
                printf("\n");
            }
            else{
                printf("Not Found");
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