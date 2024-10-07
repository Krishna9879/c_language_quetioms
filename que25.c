#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100 
#define MAX_WORD_LENGTH 50

int main() {
    char inputString[] = "Hello world, welcome to JavaScript!"; 
    char *words[MAX_WORDS]; 
    int count = 0;


    char *token = strtok(inputString, " ,.!?"); 


    for (count = 0; token != NULL && count < MAX_WORDS; count++) {
        words[count] = token; 
        token = strtok(NULL, " ,.!?"); 
    }

    // Print the words
    printf("Output: ");
    for (int i = 0; i < count; i++) {
        printf("'%s'", words[i]);
        if (i < count - 1) {
            printf(", "); 
            
        }
    }
    printf("\n");

    return 0;
}

