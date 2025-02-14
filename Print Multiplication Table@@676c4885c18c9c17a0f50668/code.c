#include<stdio.h>
int main() {
    int a,i,product;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        product = a * i;
        printf("%d * %d = %d\n",a,i,product);
    }

    return 0;
}