#include <stdio.h>

int main() {
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    (marks >= 40) ? printf("You passed the exam.") : printf("You failed the exam.");

    return 0;
}