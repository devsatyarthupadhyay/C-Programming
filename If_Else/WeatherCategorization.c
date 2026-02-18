#include<stdio.h>
int main(){
    int n;

    printf("Enter the temperature in Degree celcius:");
    scanf("%d",&n);

    if(n<0){
        printf("Freezing weather");
    }
    else if(n>=0 && n<=10){
        printf("Very cold");
    }
    else if(n>=11 && n<=20){
        printf("Cold");
    }
    else if(n>=21 && n<=30){
        printf("Normal");
    }
    else if(n>=31 && n<=40){
        printf("Hot");
    }
    else{
        printf("Very hot");
    }
}