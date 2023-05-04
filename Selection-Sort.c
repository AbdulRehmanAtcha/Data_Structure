#include <stdio.h>
int main() {
    int arr[] = {7, 4, 10, 8, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        min = i;
        for (int j = i +1; j < n; j++)
        {
            /* code */
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        
    }
    printf("The Sorted Array Is: \n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }
    return 0;
}
