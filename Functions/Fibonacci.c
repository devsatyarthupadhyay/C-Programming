#include<stdio.h>
void fibo(int num){
    int a = 1 , b = 1 , sum =0;
    printf("The 1 term of fibonacci series is %d\n",a);
    printf("The 2 term of fibonacci series is %d\n",b);
    for(int i=1;i<=num-2 ; i++){
        sum = a + b ;
        a = b ;
        b  = sum ;
        printf("The %d term of fibonacci Series is %d\n",i+2,sum);
    }
    return;
}

int main(){
    int number;
    printf("Enter number of terms of Fibonacci :");
    scanf("%d",&number);
    fibo(number);
    return 0;
}