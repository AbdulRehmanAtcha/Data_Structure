#include <stdio.h>
#include <stdbool.h>
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int toSearch;
    int l = 0;
    int r = n - 1;
    bool isFind = false;
    printf("Enter The Number To Search: ");
    scanf("%d", &toSearch);
    while (l <= r)
    {
        /* code */
        int mid = (l + r) / 2;
        if(toSearch == arr[mid]){
            isFind = true;
            break;
        }
        else if(arr[mid] < toSearch){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    if (isFind == true)
    {
        /* code */
        printf("Your Number Found");
    }
    else{
        printf("Not Found!");
    }
    
    
    
    return 0;
}