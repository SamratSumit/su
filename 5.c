//intertion of element in the begining of array
#include<stdio.h>
int main(){
	int a[100],n,i,item;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the element of array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	printf("%d",a[i]);
	}
	printf("enter the item you want to insert\n");
	scanf("%d",&item);
	  n++;
	   for(i=n;i<1;i--){
	  	a[i-1]=a[i-2];
	  }
	  a[0]=item;
	  printf("array after inserting new item\n");
	 for(i=0;i<n;i++) {
	 	printf("%d",a[i]);
	 	
	   }
    return 0;
}
