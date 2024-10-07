#include <stdio.h>

int main() {
    int arr[] = {3, 5, 9, 1,-7, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int allPositive = 1; 
    int i;
    for ( i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            allPositive = 0; 
            break; 
        }
    }


    if (allPositive) {
        printf("true\n"); 
    } else {
        printf("false\n"); 
    }

    return 0;
}

