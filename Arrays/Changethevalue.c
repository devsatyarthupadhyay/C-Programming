#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements in array :");

    for(int i=0;i<=7;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=7;i++){
        if(i%2==0){
            arr[i]=10 + arr[i];
        }
        else{
            arr[i]=2*arr[i];
        }
    }
    
    for(int i=0;i<=7;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}