#include<stdio.h>

int main(){

    int a=10;
    int b=20;

    printf("%d\n",&a);
    printf("%d\n",&b);
    int *ptr;
    ptr=&a;
    int *ptr2;
    ptr2=&b;

    printf("*ptr=%d\n",*ptr);
    printf("*ptr2=%d\n",*ptr2);
    printf("after swapping\n");
    printf("after swapping\n");

    *ptr=*ptr+*ptr2;
    *ptr2=*ptr-*ptr2;
    *ptr=*ptr-*ptr2;
 
    printf("*ptr=%d\n",*ptr);
    printf("*ptr2=%d\n",*ptr2);


    return 0;
}