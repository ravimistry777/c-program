#include<stdio.h>
int main(){
int a=10;
printf("%d\n",&a);

int *ptr;
ptr=&a;

printf("store address:- %d\n",ptr);
printf("store value:- %d\n",*ptr);
printf("pointer address:- %d\n",&ptr);
}
