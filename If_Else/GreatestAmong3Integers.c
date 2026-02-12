#include<stdio.h>
int main(){
    
    int a;
    printf("Enter the first integer:");
    scanf("%d",&a);

    int b;
    printf("Enter the second integer:");
    scanf("%d",&b);

    int c ;
    printf("Enter the third integer:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is the greatest Integer",a);
    }

    if(b>a && b>c){
        printf("%d is the greatest integer",b);
    }

    if(c>a && c>b){
        printf("%d is the greatest integer",c);
    }
    return 0;
}