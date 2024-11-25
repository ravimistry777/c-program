#include<stdio.h>

struct studentdetails
{
    int rollnum;
    int marks[3];
    int total;
    float per;
};

int main(){
    
    struct studentdetails s1[50];
    for(int i=0;i<50;i++){
        s1[i].total=0;
        s1[i].per=0.0;
        printf("enter the rollnumber:- ");
        scanf("%d",&s1[i].rollnum);

        printf("enter the marks:- ");
        for(int j=0;j<3;j++){
            scanf("%d",&s1[i].marks[j]);

        }
        for(int j=0;j<3;j++){
            s1[i].total+=s1[i].marks[j];
        }
        s1[i].per=s1[i].total/3;

        printf("rollnumber is:- %d\n",s1[i].rollnum);
        printf("total marks is:- %d\n",s1[i].total);
        printf("total per is:- %f\n",s1[i].per);
    }


    return 0;
}