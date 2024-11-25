//simple intrest without arguments and without return value


#include <stdio.h>

void pattern(){
	int i,j,n=5;
	for (i=1;i<=n;i++){
	for(j=1;j<=n-i;j++){
	printf(" ");
	}
	for(j=1;j<=i;j++){
	printf("* ");
	}
	printf("\n");
	}
}
int main() {

	pattern();
}


//simple intrest with arguments and without return value

#include <stdio.h>

void pattern(int n){
	int i,j;
	for (i=1;i<=n;i++){
	for(j=1;j<=n-i;j++){
	printf(" ");
	}
	for(j=1;j<=i;j++){
	printf("* ");
	}
	printf("\n");
	}
}
int main() {

	pattern(5);
}