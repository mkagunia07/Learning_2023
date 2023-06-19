#include<stdio.h>
#include<stdlib.h>


int main(){
    char time[10];
    char *remaining;
    long hh,mm,ss,t_sec;
    printf("Enter time:");
    fgets(time,10,stdin);
    puts(time);

    hh = strtol(strtok(time, ":"), &remaining, 10);
    //mm = strtol(strtok(time, ":"), &remaining, 10);
    //ss = strtol(strtok(time, ":"), &remaining, 10);

    printf("%ld , %ld, %ld",hh,mm,ss);

    t_sec = hh*3600 + mm*60 + ss; 
    printf("Total seconds = %ld", t_sec);
    return 0;
}