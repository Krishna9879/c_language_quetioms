#include <stdio.h>

int main() {
    char inputString[100]; 
    int length = 0; 

    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin); 

    for (length = 0; inputString[length] != '\0'; length++); 

    
    if (inputString[length - 1] == '\n') {
        length--; 
    }

    
    printf("Output: %d\n", length);

    return 0;
}

