#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MIN;
    int secondmin = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            secondmin = min;
            min = arr[i];
        }else if(arr[i]>min && arr[i]!=min){
            secondmin=arr[i];
        }
    }
    if(secondmin == INT_MIN){
        printf("%d",-1);
    }
    else{
        printf("%d",secondmin);
        return 0;
    }
}