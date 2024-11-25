#include <stdio.h>
int main(){

char character;

printf("enter the character:- ");
scanf("%c",&character);

if(character=='a'||character=='e'||character=='i'||character=='0'||character=='u'||character=='A'||character=='E'||character=='I'||character=='O'||character=='U'){
	printf("character is vowel");
}else {printf("character is consonant");
}

return 0;
}