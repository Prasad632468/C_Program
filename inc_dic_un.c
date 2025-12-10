#include<stdio.h>
int main(){
	int a;
	printf("Enter number : ");
	scanf("%d",&a);  //20
	
	printf("Pre Increment = %d\n",++a); //21
	printf("Post Increment = %d\n",a++); //21
	printf("After Post Increment = %d\n",a); //22
	printf("---------------------------");
	printf("Pre Decrement= %d\n",--a); //21
	printf("Post Decrement = %d\n",a--);//21
	printf("After Post Decreme t = %d\n",a);//20

}
