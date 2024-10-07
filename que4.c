#include <stdio.h>

int main() {
    char character;

    
    printf("Enter a character: ");
    scanf(" %c", &character);

    
    char lowerCh = (character >= 'A' && character <= 'Z') ? character + 32 : character;

    
    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
        printf("The character '%c' is a vowel.\n", character);
    } else if ((lowerCh >= 'a' && lowerCh <= 'z')) { 
        printf("The character '%c' is a consonant.\n", character);
    } else {
        printf("The character '%c' is not an alphabet.\n", character);
    }

    return 0;
}

