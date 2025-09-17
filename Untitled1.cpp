#include <stdio.h>


int main() {
    int number, firstDigit, lastDigit, sum;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    if (number < 100 || number > 999) {
        printf("Invalid input. Please enter a three-digit number.\n");
        return 1;
    }
    lastDigit = number % 10;
    int tempNumber = number; 
    while (tempNumber >= 10) {
        tempNumber /= 10;
    }
    firstDigit = tempNumber;  
    sum = firstDigit + lastDigit;                                                                                                         
    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of the first and last digit: %d\n", sum);
    return 0;     
}