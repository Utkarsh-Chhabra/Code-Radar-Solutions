#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    b=1<<(BITS-1);
    if(b&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }

    return 0;
}