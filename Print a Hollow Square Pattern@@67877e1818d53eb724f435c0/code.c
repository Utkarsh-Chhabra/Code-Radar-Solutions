#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {  // Rows
        for (int j = 0; j < n; j++) {  // Columns
            // Print '*' for first/last row or first/last column
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
