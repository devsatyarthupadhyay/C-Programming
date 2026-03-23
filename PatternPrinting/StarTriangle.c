#include<stdio.h>
int main(){
    int number;
    printf("Enter number of rows :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}