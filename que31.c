#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[1000];  
    int times, len, index = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the number of times to repeat: ");
    scanf("%d", &times);

    len = strlen(str);  
    int i,j;
    for ( i = 0; i < times; i++) {
        for ( j = 0; j < len; j++) {
            result[index++] = str[j];  
        }
    }

    result[index] = '\0';  

    
    printf("Repeated String: %s\n", result);

    return 0;
}
