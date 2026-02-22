#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i=4;i<=4+(6*n-3);i=i+3){
        printf("%d\n",i);
    }
    return 0;
}