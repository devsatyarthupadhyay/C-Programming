#include<stdio.h>
int main()
{
    int n ;
    printf("Enter your percentage :");
    scanf("%d",&n);

    if(n>100){
        printf("Please enter Valid Percentage");
    }
    else if(n>80){
        printf("A Grade");
    }
    else if(n>60){
        printf("B Grade");
    }
    else if(n>40){
        printf("C grade");
    }
    else if(n>33){
        printf("D Grade");
    }
    else{
        printf("F Grade");
    }
}