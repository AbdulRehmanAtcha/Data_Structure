#include <stdio.h>
#include <stdlib.h>
#define size 5
int arr[size];
int front = -1;
int rear = -1;


void Enqueue()
{
    int data;
    if (rear == size - 1)
    {
        /* code */
        printf("Queue Overflow. \n");
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter Element in Queue: ");
        scanf("%d", &data);
        rear++;
        arr[rear] = data;
        printf("Enqueued Successfull. \n");
    }
}

void Dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow. \n");
        return;
    }
    else
    {
        printf("Dequeued Successfull. \n");
        front++;
    }
}
void Print(){
    if(front == -1 || rear == -1){
        printf("Queue is empty. \n");
        return;
    }
    printf("Elements In Queue are: \n");
    for (int i = front; i <= rear; i++)
    {
        /* code */
        printf("%d \n", arr[i]);
    }
    
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Print();
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
