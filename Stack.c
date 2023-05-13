#include <stdio.h>
#include <stdlib.h>
#define size 3
int stack[size];
int top = 0;
void push(int value)
{
    if (top == size)
    {
        return;
    }
    stack[top] = value;
    top++;
    printf("Push Operation Successfull");
    printf("\n");
    printf("\n");
}
int pop()
{
    if (top == 0)
    {
        return -1;
    }
    top--;
    printf("Pop Operation Successfull");
    printf("\n");
    return stack[top];
}
void print()
{
    if (top == 0)
    {
        /* code */
        printf("Stack Is Emptyyy! \n");
        return;
    }
    printf("Elements in stack are. \n");
    for (int i = top; i > 0; i--)
    {
        /* code */
        printf("%d \n", stack[i - 1]);
    }
    printf("\n");
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("Stack Operations. \n");
        printf("1. Push. \n");
        printf("2. Pop. \n");
        printf("3. Print Stack. \n");
        printf("0. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (top == size)
            {
                /* code */
                printf("Stack Overflow \n");
            }
            else
            {
                printf("Enter Element to push in stack: ");
                scanf("%d", &data);
                push(data);
            }
            break;
        case 2:
            if (top == 0)
            {
                printf("Stack Underflow \n");
            }
            else
            {
                pop();
            }
            break;
        case 3:
            print();
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid choice. \n");
        }
    }
    return 0;
}