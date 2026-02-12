#include<stdio.h>
int main(){
    int n;

    printf("Enter year you want to check:");
    scanf("%d",&n);

    if(n%4==0){
        printf("The given year is Leap Year");
    }
    else{
        printf("The given number is not an Leap Year");
    }

    return 0;
}