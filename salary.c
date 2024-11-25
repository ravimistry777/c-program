#include <stdio.h>
int main(){
int salary;
float hra,da,gross_salary;

printf("enter the salary:- ");
scanf("%d",&salary);

if(salary<=5000){
	hra = salary*8/100;
	da = salary*20/100;
	gross_salary = salary+hra+da;
}else if(salary>5000 && salary<=10000){
	hra = salary*12/100;
	da = salary*30/100;
	gross_salary = salary+hra+da;
}else if(salary>10000 && salary<=15000){
	hra = salary*15/100;
	da = salary*40/100;
	gross_salary = salary+hra+da;
}else{
	hra = salary*20/100;
	da = salary*50/100;
	gross_salary = hra+da+salary;
}
printf("gross salary is:- %.2f",gross_salary);

return 0;
}