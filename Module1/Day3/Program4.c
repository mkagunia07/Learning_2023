#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        int smallest = 9;
        int largest = 0;
        int digit;
        if(num<9){
            printf("Not Valid\n", i);
        }
        else{
            int temp = num;
            while(temp > 0){
                digit = temp % 10;
                if(digit <smallest){
                    smallest = digit;
                }
                if(digit > largest){
                    largest = digit;
                }
                temp /= 10;
            }
            printf("Number %d = Smallest digit: %d, Largest digit: %d\n", i, smallest, largest);
        }
    }
    return 0;
}