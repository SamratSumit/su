#include<stdio.h>
int main(){
	int i,count,n;
	float fact=1.0,sum=0.0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	for(count=1;count<=n;count++){
		for(i=1;i<=count;i++){
			fact=fact*i;
		}
		sum=sum+(count/fact);
	}
	printf("sum of n number is :%f",sum);
	return 0;
}
