#include<stdio.h>

struct billdetails
{
    int rate;
    int qty;
    int amt;
    float discount;
    int billamt;
    float gst;
    int netbill;
};

int main(){

    struct billdetails s1[50];
    for(int i=0;i<50;i++){
        s1[i].rate=0;
        s1[i].qty=0;
        s1[i].amt=0;
        s1[i].discount=0.0;
        s1[i].billamt=0;
        s1[i].gst=0.0;
        s1[i].netbill=0;
        printf("enter the value of product(rate):- ");
        scanf("%d",&s1[i].rate);

        printf("enter the qty of product:- ");
        for(int j=0;j<1;j++){
            scanf("%d",&s1[i].qty);
        }
        
        s1[i].amt=s1[i].rate*s1[i].qty;
        s1[i].discount=s1[i].amt*0.05;
        s1[i].billamt=s1[i].amt-s1[i].discount;
        s1[i].gst=s1[i].billamt*0.18;
        s1[i].netbill=s1[i].gst+s1[i].billamt;

        printf("Rate is:- %d\n",s1[i].rate);
        printf("total qty is:- %d\n",s1[i].qty);
        printf("total amount is:- %d\n",s1[i].amt);
        printf("total dicousnt is:- %.2f\n",s1[i].discount);
        printf("Total billamount is:- %d\n",s1[i].billamt);
        printf("total gst applied:- %.2f\n",s1[i].gst);
        printf("NET BILL IS:- %d\n",s1[i].netbill);

    }

    return 0;
}
