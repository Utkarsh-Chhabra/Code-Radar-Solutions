#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  
        int num = (i % 2 == 0) ? 0 : 1;
        for (int j = 1; j <= i; j++) {  
            printf("%d ", (i + j) % 2); 
        }
        printf("\n");  
    }

    return 0;
}
