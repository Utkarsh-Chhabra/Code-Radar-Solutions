#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i;
    char replace;
    char str[400];
    
    scanf("%[^\n]",str);
    getchar();

    scanf("%c",&replace);
    for(i = 0;i < strlen(str); i++){
        // str[i] = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            str[i] = replace;
        }
    }
    printf("%s",str);
    return 0;
}
