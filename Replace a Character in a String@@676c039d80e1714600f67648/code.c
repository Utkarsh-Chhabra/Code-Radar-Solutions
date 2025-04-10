#include<stdio.h>
#include<string.h>
int main() {
    int i;
    char replacement,replace,str[400];
    scanf("%[^\n]",str);
    getchar();

    scanf("%c",&replacement);
    getchar();

    scanf("%c",replace);
    for(i = 0;i<strlen(str);i++){
        if(str[i] == replacement){
            str[i] = replace;
        }
    }
    printf("%s",str);
    return 0;
}