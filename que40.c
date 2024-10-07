/////////////////////////////////////////////(40) print numbers between the two numbers
#include<stdio.h>
void main(){
	int a,b,i;
	a=5;
	b=10;
	for(i=a;i<=b;i++){
		printf("[%d]",i);
	}
}




////////////////////////////////////////(sceond method)
//#include <stdio.h>
//
//int main() {
//    int start, end;
//    int i;
//    // Ask the user for the two numbers
//    printf("Enter two numbers (start and end): ");
//    scanf("%d %d", &start, &end);
//    
//    // Determine the size of the array based on the input range
//    int size = (end >= start) ? (end - start + 1) : (start - end + 1);
//    int numbers[size];
//    
//    // Populate the array with numbers between start and end
//    if (start <= end) {
//        for ( i = 0; i < size; i++) {
//            numbers[i] = start + i;
//        }
//    } else {
//        for ( i = 0; i < size; i++) {
//            numbers[i] = start - i;
//        }
//    }
//    
//    // Print the resulting array
//    printf("Output: [");
//    for ( i = 0; i < size; i++) {
//        printf("%d", numbers[i]);
//        if (i < size - 1) {
//            printf(", ");
//        }
//    }
//    printf("]\n");
//    
//    return 0;
//}

