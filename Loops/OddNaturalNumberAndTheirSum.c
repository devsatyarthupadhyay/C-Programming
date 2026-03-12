#include<stdio.h>
int main()
{
    int n,t=0;
    printf("Enter the number of terms required:");
    scanf("%d",&n);
    for(int i=1;i<2*n;i=i+2)
    {
        printf("%d\n",i);
        t=t+i;
    }
    printf("Sum of all the terms is %d",t);
}