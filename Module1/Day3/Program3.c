#include<stdio.h>
#include<math.h>

int main(){

    int n,max=0,ans;
    printf("Enter 4 digit number:");
    scanf("%d",&n);
    for(int i=0; i<4; i++){
       ans = (n/(int)pow(10,i+1))*(int)pow(10,i) + n%(int)pow(10,i);
       if(ans > max){
        max = ans;
       }
    }

    printf("Largest number = %d",max);
    return 0;


}