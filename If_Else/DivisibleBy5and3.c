#include<stdio.h>
int main(){

    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if(n%5==0 && n%3==0){
        printf("Given number is divisible by both 3 and 5");
    }
    else{
        printf("Given number is not divisible by both 3 and 5");
    }
    
    return 0;
}