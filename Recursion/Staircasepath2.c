#include<stdio.h>

int stair(int n){
    if(n==1 || n==2 ) return n;
    if(n==3) return 4;
    int ways = stair(n-1) + stair (n-2) + stair(n-3);
    return ways ;
}

int main(){
    int n ;
    printf("Enter the number of stairs :");
    scanf("%d",&n);
    int count = stair(n);
    printf("There are %d number to ways to reach the nth stair",count);
    return 0;
}