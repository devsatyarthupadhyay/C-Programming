#include<stdio.h>
int fact(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
    }
    return factorial ;
}

int main(){
    int number,factorial;
    printf("Upto which number you want factorial:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
       factorial = fact(i);
        printf("The factorial of %d is %d\n",i,factorial);
    }
    return 0 ;
}