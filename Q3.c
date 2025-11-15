#include <stdio.h>

int subtract_bitwise(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b; 
        a = a ^ b;             
        b = borrow << 1;       
    }
    return a;
}

int main() {
    int x, y;
    printf("Enter two integers (x y): ");
    scanf("%d %d", &x, &y);

    printf("Result (x - y): %d\n", subtract_bitwise(x, y));

    return 0;
}
