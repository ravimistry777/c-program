#include <stdio.h>

int main() {
    
    int stud[5];
    int sub[3];
    int total;
    int per;
    
    for(int i=0;i<5;i++){
        printf("enter the student name:- %d\n",i+1);
        for(int j=0;j<3;j++){
            printf("enter the marks:- %d\t",j);
            scanf("%d",&sub[j]);
        }
            total=sub[0]+sub[1]+sub[2];
            per=total/3;
            printf("total marks is:- %d\n",total);
            printf("percentage is:- %d\n",per);
    if(per>75){
        printf("A grade");
    }else if(per>=65&&per<75){
        printf("B grade");
    }else if(per>=45&&per<65){
        printf("C grade");
    }else if(per>=33&&per<45){
        printf("D grade");
    }else if(per<=33){
        printf("Fail");
    }printf("\n");
    }
    
    

    return 0;
}