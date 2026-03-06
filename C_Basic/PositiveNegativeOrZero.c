#include <stdio.h>

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    const char* result = (num > 0) ? "Positive" : (num < 0 ? "Negative" : "Zero");

    printf("The number is: %s\n", result);

    return 0;
}