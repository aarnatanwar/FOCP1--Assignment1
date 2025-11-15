#include <stdio.h>


int hcf_recursive(int a, int b) {
    if (b == 0)
        return a;
    return hcf_recursive(b, a % b);
}


int hcf_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nHCF (Recursive): %d", hcf_recursive(num1, num2));
    printf("\nHCF (Iterative): %d\n", hcf_iterative(num1, num2));

    return 0;
}
