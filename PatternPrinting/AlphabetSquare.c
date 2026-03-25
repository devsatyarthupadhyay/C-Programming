#include<stdio.h>
int main(){
    int number;
    printf("How many alphabets do you want :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=number;j++)
        printf("%c ",64+j);
        printf("\n");
    }
    return 0;
}