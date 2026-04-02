#include<stdio.h>
int main(){
    int line;
    printf("Enter number of lines :");
    scanf("%d",&line);
     int mid=line/2 +1;
    for(int i=1;i<=line;i++){
        for(int j=1;j<=line;j++){
            if(i==1 || j==1 && i<=mid || i==line || j==line && i>=mid|| i==mid) 
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
            if(j==1 ||i==1 || i==mid || j==line) 
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
            if(i==1 || j==mid) 
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
            if(i+j==line+1 || i==j&&i<=mid) 
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
            if(j==1 ||i==1 || i==mid || j==line) 
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
            if(j==1 ||i==1 || i==mid || j==line && i<=mid|| i-j == 2 && i>=mid) 
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
            if(i==1 || j==mid) 
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
            if(i==1 && j==1 || j==1 || j==line|| i==mid || i==line && j==line) 
        printf("* ");
        else{
        printf("  ");
        }
        }
        printf("\n");
    }
    return 0;
}
