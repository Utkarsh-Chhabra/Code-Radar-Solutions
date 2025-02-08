#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    printf("Enter expression (e.g., 5 2 +): ");
    scanf("%d %d %c", &a, &b, &c); // Fix: Added space before %c to handle whitespace
    
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
                printf("%.2f", (float)a / b); // Fix: Use floating-point division
            }
            break;
        default: 
            printf("Error: Invalid Operator");
    }

    return 0;
}
