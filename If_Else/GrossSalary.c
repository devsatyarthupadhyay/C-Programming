#include<stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("\n Enter the Basic Salary:");
    scanf("%f",&bs);
    if(bs<10000)
    {
        hra=0.05*bs;
        da=0.08*bs;
        gs=bs+hra+da;
        printf("\n Gross salary is %f",gs);
    }
    else if(bs>=10000 && bs<20000)
    {
        hra=0.08*bs;
        da=0.10*bs;
        gs=bs+hra+da;
        printf("\n Gross salary is %f",gs);
    }
    else
    { 
        hra=0.10*bs;
        da=0.15*bs;
        gs=bs+hra+da;
        printf("\n Gross salary is %f",gs);
    }
    return 0;
}