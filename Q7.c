#include <stdio.h>

int main() {
    int rows = 5;  

    for (int i = 1; i <= rows; i++) {

       
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);  
        }

        if (i < rows) {
            for (int s = 1; s <= (rows - i) * 2; s++) {
                printf(" ");
            }
        }

        
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
