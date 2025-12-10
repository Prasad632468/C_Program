#include<stdio.h>
int main(){
	int num1,num2;
	
	// Take User Input
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	// Logical Operator
	
	printf("(num1 > num2) && (num1 > 0) = %d\n",(num1 > num2) && (num1 < 0));
	printf("(num1 > num2) || (num1 > 0) = %d\n",(num1 > num2) || (num1 < 0));
	printf("(num1==num2) = %d\n", !(num1==num2));
	
	
	return 0;
}
