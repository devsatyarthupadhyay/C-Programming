#include<stdio.h>
int main (){
    int a,b,c;

    printf("Enter the age of Ram:");
    scanf("%d",&a);

    printf("Enter the age of shyam:");
    scanf("%d",&b);

    printf("Enter the age of ghanshyam:");
    scanf("%d",&c);

    if(a<b && a<c){
        printf("Ram is younger among them");
    }
    if(b<a && b<c){
        printf("Shyam is younger among them");
    }
    if(c<a && c<b){
        printf("Ghanshyam is younger among them");
    }

    return 0;

}