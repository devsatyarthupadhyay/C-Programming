#include<stdio.h>
int main(){
    int line;
    printf("Enter number of lines :");
    scanf("%d",&line);
    int nst = line ; // Number of stars 
    int nsp = 1 ; // Number of spaces

    for(int a=1;a<=2*line+1;a++){
        printf("* ");
    }
    printf("\n");

    for(int i=1;i<=line;i++){

        for (int j=1;j<=nst;j++){
            printf("* ");
        }

        for (int k=1;k<=nsp;k++){
            printf("  ");
        }

        for (int j=1;j<=nst;j++){
            printf("* ");
        }

        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}