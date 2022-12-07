#include<stdio.h>
int main(){
	int a[4],i,j;

	printf("enter the element of aaray\n");
	
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
		float sum=0;	
//	}
//		for(i=0;i<4;i++){
//	printf("%d ",a[i]);
//		
//	}
//	for(i=0;i<4;i++){
//	
	for(j=1;j<a[i]+1;j++){
	
		sum=sum+(j*(j+1))/2;
	}
	
	
	printf("%d=%f ",a[i],sum);
	
}

	
	return 0;
}
