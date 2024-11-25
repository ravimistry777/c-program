#include <stdio.h>
int main(){
    
    int i,num[5],a=0,b=0;
    
    for(i=0;i<5;i++){
        printf("enter the element %d:-",i);
        scanf("%d",&num[i]);
        
        if(i%2==0){
            a+=num[i];
        }else{
            b+=num[i];
        }
    }
    
     printf("odd num total is:- %d\n",a);
        printf("even num total is:- %d\n",b);
        
    
    
    
    return 0;
}