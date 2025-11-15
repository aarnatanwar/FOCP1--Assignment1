#include <stdio.h>

int main() {
    int arr[100], even_array[100], odd_array[100];
    int n, i;
    int even_count = 0, odd_count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even_array[even_count++] = arr[i];
        } else {
            odd_array[odd_count++] = arr[i];
        }
    }

    printf("\nEven elements: ");
    for(i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }

    printf("\nOdd elements: ");
    for(i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }

    printf("\n");

    return 0;
}
