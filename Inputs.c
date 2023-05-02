#include <stdio.h>
// int main() {
//     char arr[100];
//     printf("Enter a string: ");
//     fgets(arr, 100, stdin);
//     printf("You entered: %s", arr);
//     return 0;
// }
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered %d", num);
    return 0;
}