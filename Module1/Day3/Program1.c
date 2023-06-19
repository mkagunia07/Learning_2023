#include <stdio.h>
void Number(int n){
    for(int i=1; i<=n; i++){
        printf("%d", i);
    }
}
void Spaces(int n){
    for(int i=1; i<=n; i++){
        printf(" ");
    }
}
void ReverseNumber(int n){
    for(int i=n; i>=1; i--){
        printf("%d", i);
    }
}
void pattern(int n){
    for(int i=n; i>=1; i--){
        Number(i);
        Spaces(2*(n-i));
        ReverseNumber(i);
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the value till you want to print: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}