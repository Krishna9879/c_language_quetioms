#include <stdio.h>
#include <string.h>

int main() {
    char filename[] = "document.pdf";
    char *ext;

    
    ext = strrchr(filename, '.');

    if (ext != NULL && *(ext + 1) != '\0') {
        printf("File extension: %s\n", ext + 1); 
    } else {
        printf("No extension found.\n");
    }

    return 0;
}
