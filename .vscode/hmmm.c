#include<stdio.h>
int april(int principal,int rate,int time){
int total=0;

total=principal*rate*time/100;
return total;
}

int main(){
int total=0; 
int principal;
int rate;
int time;

printf("enter the value of principal:- ");
scanf("%d",&principal);
printf("enter the value of rate:- ");
scanf("%d",&rate);
printf("enter the value of time:- ");
scanf("%d",&time);
total=april(principal,rate,time);
printf("total intrest of april is:- %d",total);
}