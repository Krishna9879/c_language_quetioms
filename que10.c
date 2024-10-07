#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int evenCount = 0, oddCount = 0;
    int n = sizeof(nums) / sizeof(nums[0]);
int i;
    
    for ( i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            evenCount++;  
        } else {
            oddCount++;   
        }
    }


    printf("Even: %d, Odd: %d\n", evenCount, oddCount);

    return 0;
}

