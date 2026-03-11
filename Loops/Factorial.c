#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("Enter the number for factorial:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    f=f*i;
    printf("factorial of Given number is %d",f);
    return 0;
}