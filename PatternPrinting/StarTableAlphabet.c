#include<stdio.h>
int main(){
    int line;
    printf("Enter Number of lines : ");
    scanf("%d",&line);

    int alphabet = line ;
    int space = 1;
    int a=65;

    for(int b=1;b<=2*line +1 ; b++){
    printf("%c ",a);
    a++;
    }
    printf("\n");

    for(int i=1 ; i<=line ;i++ ){
        a=65;
        for(int j=1;j<=alphabet;j++){
            printf("%c ",a);
            a++;
        } 

        for (int k=1;k<=space;k++){
            printf("  ");
            a++;
        }

        for(int j=1;j<=alphabet;j++){
            printf("%c ",a);
            a++;
        }

        alphabet--;
        space+=2;

        printf("\n");
    }
    return 0;
}