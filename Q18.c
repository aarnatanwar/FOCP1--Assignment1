#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input! Please enter integers only.\n");
            return 1;
        }
    }

    int duplicate_found = 0;

    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        int count = 0;

        
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                count = -1; 
                break;
            }
        }
        if (count == -1) continue;

       
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 0) {
            printf("%d ", arr[i]);
            duplicate_found = 1;
        }
    }

    if (!duplicate_found) {
        printf("-1");
    }

    printf("\n");
    return 0;
}
