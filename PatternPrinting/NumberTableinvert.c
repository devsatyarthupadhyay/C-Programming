#include<stdio.h>
int main(){
    int line ;
    printf("Number of lines :");
    scanf("%d",&line);

    int number=line ;
    int space=1;
    int a=1;

    for(int b=1;b<=2*line + 1;b++){
        if(b< (2*line/2 + 1)){
            printf("%d ",a);
            a++;
        }
        else if(b>=(2*line/2 + 1)){
            printf("%d ",a);
            a--;
        }
    }
    printf("\n");

    for(int i=1;i<=line;i++){
             a=1;
      
             for(int j=1;j<=number;j++){
            printf("%d ",a);
            a++;
             }
             for(int k=1;k<=space;k++){
                printf("  ");
             }
             for(int l=1;l<=number;l++){
                printf("%d ",a-1);
                a--;
             }
             printf("\n");
             number--;
             space+=2;
    }
    return 0;
}