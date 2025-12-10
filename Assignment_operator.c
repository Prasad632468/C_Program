#include<stdio.h>
int main(){
	int num;
	
	printf("Enter number :");
	scanf("%d",&num);
	num+=5;
	printf(" After a+= %d\n",num);
	num-=5;
	printf(" After a-= %d\n",num);
	num*=5;
	printf(" After a*= %d\n",num);
	num/=5;
	printf(" After a/= %d\n",num);
	num%=5;
	printf(" After a%= %d\n",num);
	
	return 0;
	
}
