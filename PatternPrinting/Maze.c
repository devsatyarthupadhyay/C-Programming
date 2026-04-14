#include<stdio.h>
int main(){
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    int min=0;
    for (int i =1 ; i<= 2* number -1;i++){
        for(int j=1 ; j<=2*number -1 ; j++){
            int a=i;
            if(i>number)a=2*number-i;
            int b=j;
            if(b>number)b=2*number-j;
            
            if(a<b)min=a;
            else min=b;

            printf("%d ",number+1-min);
        }
        printf("\n");
    }
    return 0;
}