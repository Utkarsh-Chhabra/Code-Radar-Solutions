#include <stdio.h>
#define BITS sizeof(int)*8
int main() {
    int a,b;
    scanf("%d",&a);
    b=1<<(BITS-1);
    if(a&b){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

    return 0;
}