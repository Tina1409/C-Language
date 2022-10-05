//Simple example for switch case
#include<stdio.h>
int main(){
	int choice,a,b,s;
	printf("\n1. Addition");
	printf("\n2. Odd-Even");
	printf("\n3. Print N natural numbers");
	
	printf("\n\nEnter your choice");
	scanf("%d",&choice);
	while(1){
	
	switch(choice){
		case 1:
			
			printf("Enter two numbers: ");
			scanf("%d%d",&a,&b);
			s=a+b;
			printf("\nsum is %d",s);
			break;
			
		case 2:
		
			printf("Enter a number: ");
			scanf("%d",&a);
			if(a%2==0){
				printf("Number is even");
			}
			else{
				printf("Number is odd");
			}
			break;
		
		case 3:
			printf("Enter a number: ");
			scanf("%d",&a);
			for(b=1;b<=a;b++){
				printf("%d",b);
			}
			
			break;
		
		default:
			printf("Invalid Choice");
	}
}
	
}
