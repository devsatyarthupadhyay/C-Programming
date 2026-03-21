#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms you want:");
    scanf("%d",&n);
    int a=1,b=1,sum=1;
    printf("Fibonacci of 1 term is 1\n");
    printf("Fibonacci of 2 term is 1\n");
    for(int i=1;i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
        printf("Fibonacci of %d term is %d\n",i+2,sum);
    }
    return 0;
}