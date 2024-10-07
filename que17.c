#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6}; 
    int positiveCount = 0; 
    int negativeCount = 0; 
    int n = sizeof(arr) / sizeof(arr[0]); 
int i;

    
    for ( i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++; 
        } else if (arr[i] < 0) {
            negativeCount++; 
        }
    }

    
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);

    return 0;
}

