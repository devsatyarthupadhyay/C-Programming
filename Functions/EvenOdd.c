#include<stdio.h>

int check(int n){
    if(n%2==0) return 1;
    else return 0;
}

int main(){
    int number;
    printf("Enter your number that you want to check :");
    scanf("%d",&number);

   if (check(number)==1) printf("Given number is Even");
   if (check(number)==0) printf("Given number is Odd"); 
    return 0;
}