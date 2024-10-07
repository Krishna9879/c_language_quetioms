#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[100]; 


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
int i;

    for ( i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]); 
    }

    printf("Output: %s\n", str);

    return 0;
}

