#include<stdio.h>
int main(){
    int rows;
    printf("Enter number of rows do you want:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0)
            printf("%d ",j);
            else
            printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}