#include<stdio.h>
int main(){
    int lines;
    printf("Enter Number of lines :");
    scanf("%d",&lines);
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=lines-i;j++){
            printf("  ");
        }
            for(int k=1;k<=i;k++){
            printf("* ");
          }
            printf("\n");
    }
    return 0;
    }