#include<stdio.h>
int main() {
    int age;

    printf("Enter the age of the viewer: ");
    scanf("%d", &age) ;
    if(age < 0) {
        printf("Invalid age entered!\n");
    } 
    else if (age <= 5 || age >= 60) {
        printf("Ticket Price: Free (₹0)\n");
    } 
    else if (age >= 6 && age <= 12) {
        printf("Ticket Price: ₹100\n");
    } 
    else if (age >= 13 && age <= 18) {
        printf("Ticket Price: ₹200\n");
    } 
    else {
        printf("Ticket Price: ₹300\n");
    }

    return 0;
}
