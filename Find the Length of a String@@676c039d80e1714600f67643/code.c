// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[400];
//     gets(str);
//     printf("%d",strlen(str));
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char str[400];
    fgets(str, sizeof(str), stdin);
    
    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    printf("%d", strlen(str));
    return 0;
}
