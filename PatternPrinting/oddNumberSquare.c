#include<stdio.h>
int main(){
    int length;
    printf("Number of lines:");
    scanf("%d",&length);
    for(int i=1;i<=length;i++){
        for(int j=1;j<=2*length -1 ;j=j+2)
        printf("%d ",j);
        printf("\n");
    }
    return 0;
}