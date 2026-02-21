#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the Number :");
    scanf("%d",&n);
    printf("Enter How many times you want:");
    scanf("%d",&m);
    for (int i=1;i<=n*m;i++){
        if(i%n==0){
            printf("%d\n",i);
        }
    }
    return 0;
}