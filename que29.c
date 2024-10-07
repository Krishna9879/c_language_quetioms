#include<stdio.h>
void main(){
	int nums[]={2,7,11,15};
	int i,target,j;
	
	target=26;
	for(i=0; i<4;i++){
		//printf("%d",nums[i]);
		for(j=0;j<=i;j++){
		
		if(nums[i]+nums[j]==target){
		   printf("%d %d",i,j);
		}
	}
			}

}
