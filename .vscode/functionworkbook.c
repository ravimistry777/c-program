#include<stdio.h>

void ravi()
{
    int dollar;
    int rupees=80;
    int total;

    printf("please enter the value of dollar:- ");
    scanf("%d",&dollar);

    total=dollar*rupees;
    printf("total rupees is:- %d",total);

}

int main(){
    ravi();
}

//simple intrest without arguments and without return value

#include<stdio.h>

void january(){
int principal=1000;
int rate=25;
int time=30;
int total;
total = principal*rate*time/100;
printf("\ntotal intrest january is:- %d",total);
}
int main(){
january();
}

//simple intrest without arguments and with return value

#include<stdio.h>
int feb(){
int principal=2000;
int rate=3;
int time=25;
int total;
total=principal*rate*time/100;
return total;
}
int main(){
    int total=0;
    total=feb();
    printf("total intrest of feb is:- %d",total);
}


//simple intrest with arguments and without return value

#include<stdio.h>

void march(int principal,int rate,int time){
printf("total intrest of march is:- %d",principal*rate*time/100);
}
int main(){
march(3000,4,10);
}

//simple intrest with arguments and with return value
#include<stdio.h>
int april(int principal,int rate,int time){
int total=0;
total=principal*rate*time/100;
return total;
}

int main(){
int total=0;
total=april(2200,6,25);
printf("total intrest of april is:- %d",total);
}