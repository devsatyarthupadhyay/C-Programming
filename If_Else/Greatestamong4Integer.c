#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the first value :");
    scanf("%d",&a);

    printf("Enter the second value :");
    scanf("%d",&b);

    printf("Enter the third value :");
    scanf("%d",&c);

    printf("Enter the fourth value :");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("%d is the greatest integer",a);
    }

    if(b>a && b>c && b>d){
        printf("%d is the greatest integer",b);
    }

    if(c>a && c>b && c>d){
        printf("%d is the greatest integer",c);
    }

    if(d>a && d>b && d>c){
        printf("%d is the greatest integer",d);
    }

    return 0;
}