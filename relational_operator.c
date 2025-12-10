#include<stdio.h>
int main(){
	int num1,num2;
	
	// Take User Input
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	// Relational Operation 
	
	printf("num1 == num2 = %d\n",num1 == num2);
	printf("num1 != num2 = %d\n",num1 != num2);
	printf("num1 > num2 = %d\n",num1 > num2);
	printf("num1 < num2 = %d\n",num1 < num2);
	printf("num1 >= num2 = %d\n",num1 >= num2);
	printf("num1 <= num2 = %d\n",num1 <= num2);
}
