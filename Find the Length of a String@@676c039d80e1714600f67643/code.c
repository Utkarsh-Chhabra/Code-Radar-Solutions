#include<stdio.h>
#include<string.h>
int main(){
    char str[400];
    scanf("%[^\n]",str);
    printf("%d",strlen(str));

    return 0;
}