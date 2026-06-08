#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements in array :");

    for(int i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }

    int odd=0;
    int even=0;

    for(int i=0;i<=size-1;i++){
        if(i%2==0){
            even = even + arr[i];
        }
        else{
            odd = odd + arr[i];
        }
    }

    printf("Difference Between Sum of odd and Even is %d",even-odd);
}