#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("Monday");
    }
    if(a==2){
        printf("Tuesday");
    }
    if(a==3){
        printf("Wednesday");
    }
    if(a==4){
        printf("Thursday");
    }
    if(a==5){
        printf("Friay");
    }
    if(a==6){
        printf("Saturday");
    }
    else{
        printf("Sunday");
    }

    return 0;
}