#include<stdio.h>
int main(){
	int age;
	float marks;
	char grade;
	char name[20];
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter you marks");
	scanf("%f",&marks);
	
	printf("Enter your Grade");
	scanf(" %c",&grade);//space before %c
	
	printf("Enter your name");
	scanf("%s",name);
	
	//Display output
	
	printf("-------Student Details-------\n");
	printf("Age is : %d \n",age);
	printf("Marks is : %f \n",marks);
	printf("Grade is : %c\n",grade);
	printf("name is : %s\n",name);
	}
