#include<stdio.h>
#include<string.h>
int main() {
    int len,temp,i;
    char str[100],str1[100];
    scanf("%[^\n]",str);
    strcpy(str1,str);
    len = strlen(str1);
    for(i = 0;i < len / 2; i++){
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i - 1] = temp;
    }
    if(strcmp(str,str1) == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}