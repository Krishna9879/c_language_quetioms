#include <stdio.h>


void printLargest(int number1, int number2) {
    if (number1 > number2) {
        printf("The largest number is: %d\n", number1);
    } else if (number2 > number1) {
        printf("The largest number is: %d\n", number2);
    } else {
        printf("Both numbers are equal: %d\n", number1);
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printLargest(num1, num2);

    return 0;
}

