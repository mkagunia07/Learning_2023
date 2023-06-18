#include<stdio.h>

int main(){
    int n,i,min,max;
    printf("Enter array length:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    scanf("%d",&arr[0]);
    max = arr[0];
    min = arr[0];
    for(i=1; i<n; i++){
        scanf("%d",&arr[i]);

        if(arr[i]<min){
            min = arr[i];
        }

        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("Maximum = %d\n",max);
    printf("Minimum = %d",min);


    return 0;
}