#include<stdio.h>

int main(){

    int n1,n2;
    scanf("Enter number 1:%d",&n1);
    scanf("Enter number 2:%d",&n2);
    printf("Answer using if-else:\n");
    if(n1>n2){
        printf("Number 1 is greater");
    }
    else{
        printf("NUmber 2 is greater");
    }
    printf("\n\nAnswer using ternary operator:\n");
    (n1>n2)?printf("Number 1 is greater"):printf("Number 2 is greater");


    return 0;
}