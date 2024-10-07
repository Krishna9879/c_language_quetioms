//////////////////////////////////////////////(37)print the index of targeted value of array
#include<stdio.h>
void main(){
    int target,i;
    target=8;
	int a[]={5,7,7,8,8,10};
		for(i=0; i<6;i++){
			
			if(a[i]==target){
			   printf("%d\n",i);
			}			
		}
}
