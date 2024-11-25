#include <stdio.h>
int main(){

int physics,chemistry,maths,total;
float marks;

	printf("enter the marks of physics:- ");
	scanf("%d",&physics);
	printf("enter the marks of chemistry:- ");
	scanf("%d",&chemistry);
	printf("enter the marks of maths:- ");
	scanf("%d",&maths);

	total=physics+chemistry+maths;
	marks=total/3;
	
	if(marks>75){
		printf("grade A");
	}else if(marks>60 && marks<=75){
		printf("grade B");
	}else if(marks>45 && marks<=60){
		printf("grade C");
	}else if(marks>35 && marks<=45){
		printf("grade D");
	}else if(marks<35){
		printf("fail");
	}   
		

	return 0;
	}