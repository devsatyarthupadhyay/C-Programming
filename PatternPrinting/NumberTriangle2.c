#include<stdio.h>
int main(){
    int line;
    printf("enter number of lines :");
    scanf("%d",&line);

    for(int i=1;i<=line;i++){
         int space = line-i;
         int reverse = i-1;

        for(int j=1;j<=space;j++)
            printf("  ");

            for(int k=1;k<=i;k++)
            printf("%d ",k);

            for(int l=1;l<=i-1;l++){
                printf("%d ",reverse);
                reverse = reverse-1;
            }

            printf("\n");

    }
    return 0;
}