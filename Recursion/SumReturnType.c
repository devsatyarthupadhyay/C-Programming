#include<stdio.h>
int sum(int n){
    if(n==1 || n==0 ) return n;
    int answer = n + sum(n-1);
    return answer ;
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int answer = sum(n);
    printf("Sum = %d",answer);
    return 0;
}