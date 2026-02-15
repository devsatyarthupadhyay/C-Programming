#include<stdio.h>
int main()
{
double x1,y1,x2,y2,x3,y3,m1,m2;

printf("Enter x coordinate of first point:");
scanf("%lf",&x1);
printf("Enter y coordinate of first point:");
scanf("%lf",&y1);
printf("Enter x coordinate of second point:");
scanf("%lf",&x2);
printf("Enter y coordinate of second point:");
scanf("%lf",&y2);
printf("Enter x coordinate of third point:");
scanf("%lf",&x3);
printf("Enter y coordinate of third point:");
scanf("%lf",&y3);

m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);

if(m1==m2){
    printf("These 3 points falls on a straight line ");
}
else{
    printf("These 3 points doesn't falls on a straight line ");
}
}