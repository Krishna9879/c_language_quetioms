/////////////////////////////////////////////////////////////////////////////////////(36)
#include<stdio.h>


void main(){
    int num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    
    int i, j, k;
    
    for(i = 1; i <= num; i++) {
        
        for(j = i; j < num; j++) {
            printf(" ");
        }
        
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
    
        printf("\n");
    }
    return;
}
