#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    msb=1<<(BITS-1);
    if(a&b){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

    return 0;
}