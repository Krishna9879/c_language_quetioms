//////////////////////////////////////////////////////////////////////(35)
#include<stdio.h>
void main(){
	int num;
	printf("enter the number of rows:");
	scanf("%d",&num);
	
	int i,j;
	for(i=num; i>0;i--){
		for (j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;	
}
