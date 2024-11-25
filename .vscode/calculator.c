#include<stdio.h>

void sum()
{
    printf("\n");
    int a,b;
    printf("enter the a:- ");
    scanf("%d",&a);
    printf("enter the b:- ");
    scanf("%d",&b);
    int total = a+b;
    printf("sum is:- %d",total);
}
void sub()
{
    printf("\n");
    int a,b;
    printf("enter the a:- ");
    scanf("%d",&a);
    printf("enter the b:- ");
    scanf("%d",&b);
    int total = a-b;
    printf("sum is:- %d",total);
}
void mul()
{
    printf("\n");
    int a,b;
    printf("enter the a:- ");
    scanf("%d",&a);
    printf("enter the b:- ");
    scanf("%d",&b);
    int total = a*b;
    printf("sum is:- %d",total);
}
void div()
{
    printf("\n");
    int a,b;
    printf("enter the a:- ");
    scanf("%d",&a);
    printf("enter the b:- ");
    scanf("%d",&b);
    int total = a/b;
    printf("sum is:- %d",total);
}

int main(){
    int n;
    printf("press 1 for sum\n");
    printf("press 2 for sub\n");
    printf("press 3 for mul\n");
    printf("press 4 for div\n");

    printf("enter your choice:- ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        sum();
        break;
        case 2:
        sub();
        break;
        case 3:
        mul();
        break;
        case 4
        div();
        break;
        default:
        break;

    }
}