#include<stdio.h>
int main(){

    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n%5==0 || n%3==0 ){
        if(n%15!=0){
            printf("Given number is divisble by 5 or 3 but not divisble by 15");
        }
        else{
            printf("Given number is divisible by 3 or 5 and also divisible by 15");
        }
    }
    else{
        printf("The given number is failing given conditions");
    }
    return 0;
}