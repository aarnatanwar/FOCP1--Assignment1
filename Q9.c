#include <stdio.h>

int main() {
    int arr[100], n, i;
    int target = 99;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("First occurrence of 99 is at index %d.\n", i);
            return 0;
        }
    }

    printf("99 not found in the array.\n");
    return 0;
}
