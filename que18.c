#include <stdio.h>

void main() {
    int i;
    int arr[] = {10, 20, 30, 40, 50, 60}; 
    int arrlen = sizeof(arr) / sizeof(arr[0]); 

    
    for (i = 0; i < arrlen; i++) {
        if (i % 2 == 0) { 
            printf("%d\n", arr[i]); 
        }
    }
}

