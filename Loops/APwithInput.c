#include<stdio.h>
int main(){
    int a,d,n;
    printf("Enter the First term:");
    scanf("%d",&a);
    printf("Enter the difference:");
    scanf("%d",&d);
    printf("How many terms you want :");
    scanf("%d",&n);

    for(int i=a;i<=a+(n-1)*d;i=i+d){
        printf("%d\n",i);
    }
           return 0;
}