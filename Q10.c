#include <stdio.h>

int main() {
    int arr[100], n, i;
    int count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter the marks of students:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Students who scored 99 are at indices: ");

    for(i = 0; i < n; i++) {
        if(arr[i] == 99) {
            printf("%d ", i);   
            count++;
        }
    }

    if(count == 0) {
        printf("None");
    }

    printf("\nTotal number of students who scored 99 = %d\n", count);

    return 0;
}
