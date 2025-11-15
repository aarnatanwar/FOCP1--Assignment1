#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    printf("Enter position to insert (0 = front, %d = end): ", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    
    printf("\nArray before insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = value;

    n++;  

    
    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
