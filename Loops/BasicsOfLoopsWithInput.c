#include<stdio.h>
int main(){
    int n;
    printf("How many times you wants to prints:");
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+1){  // we can also write i=i+1 as i++
        printf("Hello PW\n");
    }
}