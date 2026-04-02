#include<stdio.h>
int main(){
    int line;
    printf("Enter number of lines :");
    scanf("%d",&line);
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(j==1 ||i==line ) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(j==1 ||i==1 || i==a || j==line) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(j==1 || i+j == a+1 && i<=a || i-j == 2 && i>=a) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(i==1 || j==1 && i<=a || i==line || j==line && i>=a|| i==a) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(i==1 && j==1 || j==1 || j==line|| i==a || i==line && j==line) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(j==a||i==line || i==1 ) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(i==1 || j==a) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            int a=line/2 +1;
            if(j==1 ||i==1 || i==a || j==line) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    return 0;
}