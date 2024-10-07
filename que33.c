/////////////////////////////////////////////////////////////////////(33)check the century year or not 
#include<stdio.h>
void main(){
	int year;
	printf("enter the year:",year);
	scanf("%d",&year);
	if(year%100==0){
		printf("this is  a century year");
	}else{
		printf("not a century year");
	}
}
