#include<stdio.h>
int main(){
//	int amount;
//	
//	printf("Enter your food order amount : ");
//	scanf("%d",&amount);
//	
//	if(amount>500){
//		printf("Congratulations You get Free Dilivery");
//	}
//	else{
//		printf("Dilivery Charges Will be Apply");
//	}

        int balance, withdraw;
        printf("Enter your Balance : ");
        scanf("%d",&balance);
        printf("Enter your Withdraw amount : ");
        scanf("%d",&withdraw);
        
        if(withdraw<=balance){
        	printf("withdraw Successfull\n");
        	printf("remaining amount = %d",balance-withdraw);
		}
		else{
			printf("insufficient balance");
		}
}
