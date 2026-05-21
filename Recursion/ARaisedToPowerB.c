#include<stdio.h>

int power(int a , int b){
    if(b==0) return 1;
    int Ans = a * power(a,b-1);
    return Ans;
}

int main(){
    int a;
    printf("Enter Base : ");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);
    int p;
    p=power(a,b);
    printf("%d raised to the power %d is %d", a , b , p);
    return 0;
}