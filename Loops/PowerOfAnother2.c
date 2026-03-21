#include<stdio.h>
int main(){
    int base,power;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter Power:");
    scanf("%d",&power);
    int answer=1;
    for(int i=1;i<=power;i++){
        answer=base*answer;
        printf("%d raised to power %d is %d\n",base,i,answer);
    }
    return 0;
}