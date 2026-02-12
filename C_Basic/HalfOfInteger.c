#include<stdio.h>
int main(){
    
    float x;
    printf("Enter the Integer with Decimal :");

    scanf("%f",&x);
    int y=x;

    printf("The whole number is %d \n",y);
    float a = x-y;

    printf("The decimal value :%f",a);
    return 0;
}