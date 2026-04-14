#include<stdio.h>
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int combination(int n , int r){
int ncr = fact(n)/(fact(r)*fact(n-r));
return ncr;
}

int main(){
    int line;
    printf("How many lines you want in pascal triangle:");
    scanf("%d",&line);

    for(int i=0;i<=line-1;i++){
        for(int k=0;k+i<=6;k++)
        printf("  ");
        for(int j=0;j<=i;j++){
             int icj = combination(i,j);
             printf("%d   ",icj);
        }
        printf("\n");
    }
    return 0;
}