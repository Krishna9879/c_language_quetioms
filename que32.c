#include <stdio.h>


void categorizeAge(int age) {
    if (age < 13) {
        printf("You are a Child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a Teenager.\n");
    } else if (age >= 20 && age <= 59) {
        printf("You are an Adult.\n");
    } else if (age >= 60) {
        printf("You are a Senior.\n");
    } else {
        printf("Invalid age entered.\n");
    }
}

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    
    categorizeAge(age);
    
    return 0;
}
