#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,odd=0,even=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

        if(arr[i]%2==0){
            even += arr[i];
        }
        else{
            odd += arr[i];
        }
    }

    printf("Difference = %d", abs(even - odd));

    return 0;
}