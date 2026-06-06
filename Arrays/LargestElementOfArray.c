#include<stdio.H>
int main(){
    int size ;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array :");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(max < arr[i]){
            max=arr[i];
        }
    }
    printf("Largest element of the array is %d",max);
    return 0;
}