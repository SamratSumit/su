#include<stdio.h>
 int main()
    {
    
    int i;
 	int arrey[5];
 		printf("enter the element of arrey\n");
 	for(i=0;i<5;i++){
 	
 		scanf("%d",&arrey[i]);
	 }
	 for(i=0;i<5;i++){
	 	printf("%d=%d ",i,arrey[i]);
	 }
	 printf("reverse of arrey\n");
	 for(i=4;i>=0;i--){
	 	printf("%d-%d ",i,arrey[i]);
	 }
	
 	 return 0;
 }
