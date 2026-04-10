#include<stdio.h>
int main(){
    int line;
    printf("Enter Number of lines :");
    scanf("%d",&line);
    int nst=line;
    int nsp=0;
    for(int i=1;i<=line;i++){
        for(int j=1;j<=nsp;j++)
            printf("  ");

            for(int k=1;k<=nst;k++)
            printf("* ");

            nsp++;
            nst--;
            printf("\n");
    }
    return 0;
}