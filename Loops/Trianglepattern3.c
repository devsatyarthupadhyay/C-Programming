#include<stdio.h>
int main()
{
    for(int l=4;l>=1;l--)
    {
        for(int b=1;b<=l;b++)
        printf("%d ",b);
        printf("\n");
    }
    return 0;
}