#include <stdio.h>
#include <math.h>
int main() {
    double x = 0.7;
    int exponent_hex = ((*(long long*)&x) & 0x7FF0000000000000LL) >> 52;
    int exponent_binary = ((*(long long*)&x) & 0x7FF0000000000000LL) >> 52;
    printf("Exponent in hexadecimal: 0x%X\n", exponent_hex);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent_binary >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}