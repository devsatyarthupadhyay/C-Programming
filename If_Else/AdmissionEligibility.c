#include<stdio.h>
int main(){
    int chem,phy,math,n,m;

    printf("Enter your marks in chemistry:");
    scanf("%d",&chem);

    printf("\nEnter the marks in physics:");
    scanf("%d",&phy);

    printf("\nEnter the marks in Math:");
    scanf("%d",&math);

    n=chem+phy+math;
    m=math+phy;

    if((math>=65 && phy>=55 && chem>=50)&&(n>=190 || m>=140)){
    printf("You are eligible for admission");
    }
    else{
        printf("you are not eligible for admission");
    }
    return 0;
}