#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    printf("%d is %sa Leap Year.\n", year, isLeap ? "" : "not ");

    return 0;
}