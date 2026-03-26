#include<stdio.h>
int main(){
    int row;
    printf("How many rows do you want in Floyd's Triangle:");
    scanf("%d",&row);
    int counting=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",counting);
            counting++;
        }
        printf("\n");
    }
    return 0;
}