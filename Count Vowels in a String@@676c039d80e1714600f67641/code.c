#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i;
    int count = 0;
    char st = [40];
    scanf("%[^\n]",st);
    for(i = 0; i<strlen(st);i++){
        st[i] = tolower(st[i]);
        if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u'){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}