#include<stdio.h>
int main(){
    int n;

    printf("Enter the value:");
    scanf("%d",&n);

    if(n%5==0){
        printf("The Given number is Divisibe by 5");
    }
    else{
    printf("The given number is Not Divisible by 5");
    }

    return 0;
}