#include<stdio.h>

int sum(){
    int a=10;
    int b=20;
    int total=0;
    total=a+b;

    return total;
}
int main(){
    int total=0;
    total=sum();
    printf("total=%d",total);
}