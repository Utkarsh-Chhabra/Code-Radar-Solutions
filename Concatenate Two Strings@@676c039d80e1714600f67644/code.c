#include<stdio.h>
#include<string.h>
int main(){
    char str1[400],str2[400];
    scanf("%[^\n]",str1);
    getchar();

    scanf("%[^\n]",str2);
    getchar();

    strcat(str1, str2);
    printf("%s",str1);

    return 0;
}