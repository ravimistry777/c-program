#include <stdio.h>
#include <string.h>

int main(){

    char name[]={'S','I','D','D','H','A','P','U','R','A','\0'};

    int i=0;
    int len;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    printf("%d",i);
    len = i;
    
    for(int i=len;i>=0;i--){
        printf("%c",name[i]);
    }




    return 0;
}