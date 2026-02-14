#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the first integer :");
    scanf("%d",&a);
    printf("Enter the second integer:");
    scanf("%d",&b);
    printf("Enter the third integer:");
    scanf("%d",&c);

    if(a>b){  // b is out of race 
        if(a>c){
            printf("%d is the greatest integer",a);
        }
        else{
            printf("%d is the greatest integer",c);
        }
    }
    else { // b>a , a is out of race 
        if(b>c){  
            printf("%b is the greatest integer",b);
        }
        else { //c>b
            printf("%d is the greatest integer",c);
        }
    }
}