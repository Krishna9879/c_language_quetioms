#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a + b > c && a + c > b && b + c > a) {
    
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        } else if (a == b || a == c || b == c) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("The lengths do not form a triangle.\n");
    }

    return 0;
}

