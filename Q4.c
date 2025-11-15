#include <stdio.h>

// Method 1: Using a temporary variable
void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Using arithmetic operations
void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Using bitwise XOR
void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Method 4: Using pointers directly
void swap_pointer(int *a, int *b) {
    int *temp;
   
    temp = a;
    a = b;
    b = temp;

    
    printf("After pointer swap (inside function): a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal values: x = %d, y = %d\n", x, y);

    // Method 1
    int a1 = x, b1 = y;
    swap_temp(&a1, &b1);
    printf("After temp swap: a = %d, b = %d\n", a1, b1);

    // Method 2
    int a2 = x, b2 = y;
    swap_arithmetic(&a2, &b2);
    printf("After arithmetic swap: a = %d, b = %d\n", a2, b2);

    // Method 3
    int a3 = x, b3 = y;
    swap_xor(&a3, &b3);
    printf("After XOR swap: a = %d, b = %d\n", a3, b3);

    // Method 4
    int a4 = x, b4 = y;
    printf("\nPointer swap demonstration:\n");
    swap_pointer(&a4, &b4);  
    printf("Values in main remain unchanged: a = %d, b = %d\n", a4, b4);

    return 0;
}
