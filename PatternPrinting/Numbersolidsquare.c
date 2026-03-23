#include<stdio.h>
int main(){
    int number;
    printf("How many numbers you want in one line :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=number;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}