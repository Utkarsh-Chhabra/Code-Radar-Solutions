#include<stdio.h>
#include<string.h>
int main(){
    int i,temp,str1,len;
    char str[100];
    str = str1;
    scanf("%[^\n]s",str);
    len = strlen(str1);
    for(i = 0; i < len / 2;i++){
        str1[i] = temp;
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
    if(str == str1){
        printf("Yes");
    }
    else{
        printf("No");
    }

    retrun 0;
    
}