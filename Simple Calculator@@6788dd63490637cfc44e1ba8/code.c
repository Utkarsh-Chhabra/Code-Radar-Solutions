#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %d %c", &a, &b, &c);
    
    switch (c) {
        case '+': 
            printf("%d", a + b);
            break;
        case '-': 
            printf("%d", a - b);
            break;
        case '*': 
            printf("%d", a * b);
            break;
        case '/': 
            if (b == 0) { // Fix: Prevent division by zero
                printf("Error: Division by zero");
            } else {
                printf("%f", (float)a / b); // Fix: Use floating-point division
            }
            break;
        default: 
            printf("error");
    }

    return 0;
}
