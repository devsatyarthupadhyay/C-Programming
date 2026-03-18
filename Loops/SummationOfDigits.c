#include<stdio.h>
int main()
{
    int n;
    printf("Enter your Number:");
    scanf("%d",&n);
    int sum=0,ld;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("The summation of digits in the given number is :%d",sum);
}