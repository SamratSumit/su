#include<stdio.h>
int main(){
	int balance=25000,cashdeposit,totalamount,cashwithdraw,choice;
	printf("enter 1 for cash deposit\n enter 2 for cash withdraw\n enter 3 for check current balance satetment\n enter 0 for exist the system\n");
	scanf("%d",&choice);
	switch(choice){
		case 1: 
		printf("enter the amount you want to deposit\n");
		scanf("%d",&cashdeposit);
		totalamount=balance+cashdeposit;
		printf("total balance after cash deposition is:%d\n",totalamount);
//		break;
		case 2:
		printf("enter the amount you want to withdraw\n");
		scanf("%d",&cashwithdraw);
		totalamount=balance-cashwithdraw;
		if(cashwithdraw>=4000||totalamount<=10000){
			printf("your total balance cannot less 10000 or you cannat withdraw more than 4000");
		}
		else{
			printf("your total balance is:%d\n",totalamount);
		}
//		break;	
		case 3:
			printf("current balance is:%d\n",balance);
//		break;
			
		case 0:
			exit(1);
//		break;
		default:
			printf("such option are not aviable\n");
			
	}
	return 0;
}
