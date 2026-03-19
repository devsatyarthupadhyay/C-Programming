#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number of terms you want:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        sum=sum+i;
        else
        sum=sum-i;
    }
    printf("The sum of the numbers is :%d",sum);
    return 0;
}