#include<stdio.h>
void main(){
	int n[6]={1,3,2,4,5,6};
	int len = sizeof(n) / sizeof(n[0]);
	int even,odd,i;
	even=0;
	odd=0;
	for(i=0;i<len;i++){
		if(n[i]%2==0){
			even=even+n[i];
		}
		else{
			odd=odd+n[i];
		}
	}
	printf("sum of even:%d\n",even);
	printf("sum of odd:%d",odd);
}
