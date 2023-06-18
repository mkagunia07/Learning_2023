#include<stdio.h>

int main(){

    int n,sum=0,i;
    printf("Enter array length:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array elements:");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n",sum);
    printf("Average = %f",(float)sum/(float)n);




    return 0;
}