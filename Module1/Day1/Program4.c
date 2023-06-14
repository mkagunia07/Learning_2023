#include<stdio.h>

int main(){

    int n1,n2;
    char op;

    printf("Enter Number 1:");
    scanf("%d",&n1);
    printf("Enter the operator:");
    scanf("%c",&op);
    printf("Enter Number 2:");
    scanf("%d",&n2);

    switch(op){
        case '+':printf("%d",n1+n2);
                break;
        case '-':printf("%d",n1-n2);
                break;
        case '*':printf("%d",n1*n2);
                break;
        case '/':printf("%d",n1/n2);
                break;
        case '%':printf("%d",n1%n2);
                break;
        default:printf("Invalid choice");
    }

    return 0;
}