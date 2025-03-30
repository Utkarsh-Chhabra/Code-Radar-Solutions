#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        char letter = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;  
        }
        printf("\n");  
    }

    return 0;
}
