#include<stdio.h>

int main(){

    int n,temp;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<(n/2); i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("Reversed array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}