#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the Divident :");
    scanf("%d",&a);
    printf("Enter the Divisor :");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);
    printf("The remainder is %d",r);
    return 0;
}