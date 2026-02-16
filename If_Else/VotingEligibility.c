#include<stdio.h>
int main(){
    int n;
    printf("Enter age of person:");
    scanf("%d",&n);

    if(n==18 || n>18){
        printf("Person is eligible for voting");
    }
    else{
        printf("Person is not eligible for voting");
    }
}