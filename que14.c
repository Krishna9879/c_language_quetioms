#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]); 
    int new_element = 2; 

    
    int new_nums[n + 1];

    
    new_nums[0] = new_element;
    int i;

    for(i = 0; i < n; i++) {
        new_nums[i + 1] = nums[i];
    }

    
    for( i = 0; i < n + 1; i++) {
        printf("%d ", new_nums[i]);
    }
    return 0;
}
