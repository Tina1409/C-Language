//program to make a simple claculator
#include"stdio.h"
int main(){
	int num1,num2,choice;
	printf("\t\t****CALCULATOR**** ");
	printf("\n\t\t**MENU**");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	printf("\t\t**INPUT**");
	printf("\nEnter the first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	switch(choice){
		case 1:
			printf("The addition is %d ",num1+num2);
			break;
		case 2:
			printf("The subtraction is %d",num1-num2);
			break;
		case 3:
			printf("The multiplication is %d",num1*num2);
			break;
		case 4:
			printf("The division is %d",num1/num2);
			break;
		default:
			printf("Invalid Choice");
			
	}
}
