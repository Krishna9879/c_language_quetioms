/////////////////////////////////////////////////////////////////////(34)last and first number of an array
#include<stdio.h>
void main(){
	

	int arr[]={10,20,30,40,50};
		 int len = sizeof(arr) / sizeof(arr[0]);  
     int b,c,d;
     b=arr[0];
     c=len-1;
     d=arr[c];
     printf("%d \n",b);
    printf("%d ",d);

}
