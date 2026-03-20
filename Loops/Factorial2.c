#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int Factorial=1;
    for(int i=1;i<=n;i++){
        Factorial=Factorial*i;
        printf("Factorial of %d is %d\n",i,Factorial);
    }
    return 0;
}