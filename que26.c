#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "codinggita";
    char ch = 'a';
    
    int len = strlen(str);
    
    if (len > 0 && str[len - 1] == ch) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
