#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};     
    int newSize = sizeof(arr) / sizeof(arr[0]) + 1; 
    int newArr[newSize];              
int i;
    
    for ( i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        newArr[i] = arr[i];
    }

    newArr[newSize - 1] = 6;        


    printf("Updated array: [");
    for (i = 0; i < newSize; i++) {
        printf("%d", newArr[i]);
        if (i < newSize - 1) {
            printf(", "); 
        }
    }
    printf("]\n");

    return 0;
}

