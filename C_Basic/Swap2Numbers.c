#include<stdio.h>
int main(){
    int a ;
    printf("Enter A:");
    scanf("%d",&a);
    int b;
    printf("Enter B:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Swapped Number A is %d\n",a);
    printf("Swapped Number B is %d",b);

    return 0;
}