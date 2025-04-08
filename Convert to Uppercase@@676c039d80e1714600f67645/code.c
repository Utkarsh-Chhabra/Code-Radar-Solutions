#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    int i,len;
    char str[400];
    scanf("%[^\n]",str);
    len = strlen(str);
    for(i = 0;i<len;i++){
        str[i] = toupper(str[i]);
        printf("%c",str[i]);
    }

    return 0;
}
