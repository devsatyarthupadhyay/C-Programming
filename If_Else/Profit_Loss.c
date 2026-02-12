#include<stdio.h>
int main(){
    float cp,sp;

    printf("Enter the Cost price :");
    scanf("%f",&cp);

    printf("Enter the selling price :");
    scanf("%f",&sp);

    if(sp>cp){
        printf("Profit\n");
        sp=sp-cp;
        printf("Net profit is %f rupees",sp);
    }

    if(sp<cp){
        printf("Loss\n");
        cp=cp-sp;
        printf("Net loss is %f rupees",cp);
    }

    if(sp==cp){
        printf("Neither profit Nor loss");
    }
    return 0;
}
