#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    msb=1<<(BITS-1);
    if(num&msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

    return 0;
}