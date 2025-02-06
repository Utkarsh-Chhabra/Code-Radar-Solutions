#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(1<=a>=100 && 0<a){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }

    return 0;
}