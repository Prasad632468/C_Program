#include<stdio.h>
int main(){
	
	int a = 12, b= 13;
	
	
	printf("a & b = %d\n" ,a&b);
	printf("a | b = %d\n ",a|b);
	printf("a^b = %d\n",a^b);
	
	//left shift
	printf("a<<1 = %d\n",a<<1);
	printf("a<<2 = %d\n",a<<2);
	printf("a<<3 = %d\n",a<<3);
	
	//right shift
	printf("a>>1 =%d\n",a>>1);
	printf("a>>2 =%d\n",a>>2);
	printf("a>>3 =%d\n",a>>3);
	
	printf("~a = %d",~a);
	return 0;
}
