// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[400];
//     scanf("%[^\n]",str);
//     printf("%d",strlen(str));

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char str[400];

    // Use fgets to safely read input, even empty lines
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("%d", (int)strlen(str));

    return 0;
}
