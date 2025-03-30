#include <stdio.h>

int main() {
    int n, num = 1;

    
    scanf("%d", &n);

    // Generating pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
