#include<stdio.h>
#include<stdint.h>

int32_t bit_operations(int32_t num, int oper_type){
    switch(oper_type){
        case 1:return num | 1;
                break;
        case 2:return num & ~(1 << 31);
                break;
        case 3: return num ^ 1<<16;
                break;
        default:printf("Wrong choice entered");
    }
}

int main(){

    int32_t num; 
    int oper_type;
    scanf("Enter number:%d",&num);
    scanf("Enter operation type:%d",&oper_type);

    bit_operations(num, oper_type);

    return 0;
}