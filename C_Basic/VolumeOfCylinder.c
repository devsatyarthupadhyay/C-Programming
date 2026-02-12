#include<stdio.h>
int main(){
    float r,h,v;

    printf("Radius of cylinder :");
    scanf("%f",&r);

    printf("Height of cylinder :");
    scanf("%f",&h);

    v= 3.141592*r*r*h;
    
    printf("Volume of cylinder:%f",v);
    return 0;
}