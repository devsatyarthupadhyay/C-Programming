#include<stdio.h>
int main(){
    int row;
    printf("Enter odd number of row :");
    scanf("%d",&row);
    int a;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            a = row/2 + 1;
            if(j==a || i==a)printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}