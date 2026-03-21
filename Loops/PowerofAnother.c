#include<stdio.h>
int main(){
    int base;
    printf("Enter the value of Base number :");
    scanf("%d",&base);
    int power;
    printf("Enter the value of Power:");
    scanf("%d",&power);
    int answer=1;
    for(int i=1;i<=power;i++){
        answer=answer*base;
    }
    printf("Your answer is %d",answer);
    return 0;
}