#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the number :");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n%d",n*i);
        i++;
    }
    return 0;
}