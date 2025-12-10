#include<stdio.h>
int main(){
	// Integer Types
	
	int i = 10;
	short int si = 5;
	long int li = 120007;
	unsigned int ui = 20;
	
	// Character type
	
	char  c = 'A';
	
	//floating -points type
	float f = 3.14;
	double d = 3.1433233223;
	long double ld = 3.1342332233223;
	
	printf("-------Integer Types-------\n");
	
	printf("int : value = %d,size=%zu byte \n ", i, sizeof(i));
	
	return 0;
}
