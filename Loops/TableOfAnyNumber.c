#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the Number:");
    scanf("%d",&n);

    for(i=1;i<=n*10;i++){
        if(i%n==0){
            printf("%d\n",i);
        }
    }
    return 0;
}