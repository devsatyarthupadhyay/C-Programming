#include<stdio.h>
int main(){
    float pi=3.1415;
    float r;
    printf("enter the radius:");
    scanf("%f",&r);
    float a=pi*r*r;
    printf("Area of the circle:%f",a);
    return 0;
}