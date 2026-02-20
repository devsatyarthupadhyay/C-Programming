#include<stdio.h>
int main(){
    int n;
    printf("How many times you wants to prints:");
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+1){  // i=i+1 ko hum i=i++ bhi likh skte h
        printf("Hello PW\n");
    }
}