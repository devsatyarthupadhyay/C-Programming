#include<stdio.h>

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int factn = fact(n);
    int r;
    printf("Enter the value of r:");
    scanf("%d",&r);
    int factr = fact(r);
    int factnr = fact(n-r);
    int ncr = factn / (factr * factnr);
    printf("%d",ncr);
    return 0;
}