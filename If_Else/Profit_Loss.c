#include<stdio.h>
int main(){
    float cp,sp,p,l;

    printf("Enter the Cost price :");
    scanf("%f",&cp);

    printf("Enter the selling price :");
    scanf("%f",&sp);

    if(sp>cp){
        printf("Profit\n");
        p=sp-cp;
        printf("Net profit is %f rupees",p);
    }

    if(sp<cp){
        printf("Loss\n");
        l=cp-sp;
        printf("Net loss is %f rupees",l);
    }

    if(sp==cp){
        printf("Neither profit Nor loss");
    }
    return 0;
}
