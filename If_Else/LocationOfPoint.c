#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the x coordinate:");
    scanf("%d",&x);
    printf("Enter the y coordinate:");
    scanf("%d",&y);

    if(x==0 && y==0){
        printf("The point lie on origin");
    }
    else if (y==0){
        printf("The point lie on x-axis");
    }
    else if(x==0){
        printf("The point lie on y-axis");
    }
    else {
        printf("Point doesn't lie on x-axis or y-axis");
    }
    return 0;
}