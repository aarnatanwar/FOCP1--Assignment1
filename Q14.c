#include <stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
        }
    return 1;
}

int main() {
    int arr[100], n, i;
    int primeCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            primeCount++;
        }
    }

    printf("Total prime numbers in the array = %d\n", primeCount);

    return 0;
}
