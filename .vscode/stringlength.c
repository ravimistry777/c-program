#include <stdio.h>
#include <string.h>

int main(){

    char name[]={'S','I','D','D','H','A','P','U','R','A','\0'};

    int i=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    printf("%d",i);





    return 0;
}