void main(){
	int nums[]={4,2,8,5,1};
	int arrlen=sizeof(nums)/sizeof(nums[0]);
    int i,sum;
    sum=0;
	for(i=0; i<arrlen; i++){
	sum=sum+nums[i];	
	}
	printf("%d \n",sum);
	int j;
	j=sum/arrlen;
	printf("%d",j);
	}
