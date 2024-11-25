#include <stdio.h>

float sum(float a,int b){
    float total=0.0;
    total=a*b;
    return total;
}
int main(){
    float total=0.0;
    total=sum(25.2,22);
    printf("sum of a and b is:- %.2f",total);

}