#include<stdio.h>
int main(){
    float l , b , a , p ;

    printf("Enter the lenght of Rectangle :");
    scanf("%f",&l);

    printf("Enter the breadth of Rectangle :");
    scanf("%f",&b);

    a=l*b;
    printf("Area of the given Rectangle is %f\n",a);

    p=2*(l+b);
    printf("Perimeter of the given Rectangle is %f\n",p);

    if(a>p){
        printf("Area is greater than the perimeter");
    }
     
    if(a<p){
        printf("Perimeter is greater than Area");
    }

    if(a==p){
        printf("Area and Perimeter both are equal to each other");
    }
    return 0;
}