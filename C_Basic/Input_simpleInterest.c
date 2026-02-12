#include<stdio.h>
int main(){

    float p,t,r,si;

    printf("Enter the principal amount:");
    scanf("%f",&p);

    printf("Enter the rate of interest:");
    scanf("%f",&r);

    printf("Enter time :");
    scanf("%f",&t);

    si=(p*r*t)/100;
    printf("Simple interest is : %f",si);

    return 0;
}