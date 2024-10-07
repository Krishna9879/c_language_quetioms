

#include <stdio.h>
#include <string.h>

int main() {
    char uname[20]; 
    int pw;

    printf("Enter the username: ");
    scanf("%s", uname); 


    printf("Enter the password: ");
    scanf("%d", &pw); 

    if (strcmp(uname, "krishna") == 0 && pw == 123) {
        printf("Login successful\n");
    } else {
        printf("Login failed\n");
    }

    return 0;
}
