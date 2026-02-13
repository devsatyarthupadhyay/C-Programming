#include<stdio.h>
int main(){

    int n ;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n%5==0){
        if(n%3==0){
            printf("Given number is divisible by both 3 and 5 ");
        }
        else{
            printf("Given number is divisible by 5 but not divisible by 3");
        }
    }
    else{
    printf("Given number is not divisible by both 3 and 5");
    }
    return 0;
}
