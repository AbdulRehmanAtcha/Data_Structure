#include <stdio.h>
#include <stdbool.h>


int main()
{
    int input;
    bool isFound = false;
    int num[8] = {15, 5, 20, 35, 2, 42, 67, 17};
    printf("Enter a number you wants to search in array through linear search: ");
    scanf("%d", &input);
    for (int i = 0; i < 8; i++)
    {
        if (num[i] == input)
        {
            printf("Value Found At Index %d", i);
            isFound = true;
            break;
        }
    }
    if (isFound == false)
    {
        printf("Value Not Found");
    }

    return 0;
}