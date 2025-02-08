#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        for(j=i;j<a;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}