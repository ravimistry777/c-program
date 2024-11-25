#include <stdio.h>
int main(){
	int unit;
	float surcharge,amt,totalamt,minimumcharge;
	
	printf("enter the value of unit:- ");
	scanf("%d",&unit);
	
	if(unit<=100){
		amt = unit*.60;
	}else if(unit<=200){amt = 100*.60+(unit-100)*.80;}
	else if(unit<=300){amt = 100*.60+100*.80+(unit-200)*.90;}
	else{amt = 100*.60+100*.80+100*.90+(unit-300)*.15;}
	
	minimumcharge = 50;
	totalamt = minimumcharge+amt;
	
	printf("bill amount is:- %.2f",totalamt);
	
	
	
	return 0;
}