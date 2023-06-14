#include<stdio.h>

int main(){
    int rno;
    float phy,chem,maths;
    char name[40];

    scanf("Enter roll no:%d",&rno);
    printf("Enter name:");
    fgets(name,40,stdin);
    scanf("Enter Physics marks:%f",&phy);
    scanf("Enter Physics marks:%f",&chem);
    scanf("Enter Physics marks:%f",&maths);

    printf("\n\n");
    printf("Roll Number:%d",rno);
    puts("Name:",name);
    printf("Physics marks:%d",phy);
    printf("Chemistry marks:%d",chem);
    printf("Maths marks:%d",maths);

    return 0;
}