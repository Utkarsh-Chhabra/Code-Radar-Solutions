#include <stdio.h>

int main() {
    int n, i, j;

    // Taking user input
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Generating pyramid
    for (i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
