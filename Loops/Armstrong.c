#include<stdio.h>
#include<math.h> 
int main(){
    int originalNumber ,firstDigit ,secondDigit, thirdDigit, computedNumber;
    for(int i=1;i<=500;i++){
        originalNumber = i;
        thirdDigit = originalNumber % 10;
        secondDigit = (originalNumber/10) % 10;
        firstDigit = originalNumber / 100;

        computedNumber = pow(firstDigit, 3)  + pow(secondDigit, 3) + pow(thirdDigit, 3);
        if(computedNumber == originalNumber)
        printf("%d is Armstrong Number\n", originalNumber);
    }
    return 0;
}