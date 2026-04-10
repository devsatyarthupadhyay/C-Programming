#include<stdio.h>
int main(){
    int line;
    printf("Enter Number of lines :");
    scanf("%d",&line);
    int nsp = line /2 ;
    int nst = 1;
    int ml = line/2 + 1;

    for(int i=1;i<=line;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp ++;
            nst -=2;
        }
        printf("\n");
    }
    return 0;
}