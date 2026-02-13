#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    if((n%5==0 || n%3==0)&& n%15!=0){
        printf("Given number is divisible by 5 or 3 but not by 15");
    }
    else {
        printf("Given number is also divisible by 15");
    }
    return 0;
}