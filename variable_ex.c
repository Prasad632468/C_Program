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
	long double ld = 3.13423334;
	
	printf("-------Integer Types-------\n");
	
	printf("int : value = %d,size=% zu byte \n ", i, sizeof(i));
	printf("short int : value = %d, size = % zu byte \n",si,sizeof(si));
	printf("long int : value = %ld, size = % zu byte \n",li,sizeof(li));
	printf("unsigned int : value = %u, size = % zu byte \n",ui,sizeof(ui));
	
	
	printf("-------Character Type-------\n");
	printf("char : value = %c, size = % zu byte \n",c,sizeof(c));
	
	printf("-------Floating Point Types-------\n");
	printf("float : value = %f, size = % zu byte \n",f,sizeof(c));
	printf("double : value = %lf, size = % zu byte \n",d,sizeof(d));
	printf("long double : value = %Lg, size = %zu byte \n",ld,sizeof(ld));
	
	return 0;
}
