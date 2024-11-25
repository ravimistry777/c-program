#include<stdio.h>
int maths=50;
int english=60;
int hindi=60;
int total;
int per;

int getmarks(){
    total=maths+english+hindi;
    return total;
}

int per1(){
    total=getmarks();
    per=total/3;
    
    return per;
}
void printmarks(){
    per=per1();
    printf("total marks is:- %d\n",total);
    printf("total percentage is :- %d",per);
}
int main(){
   printmarks();
    return 0;
}
