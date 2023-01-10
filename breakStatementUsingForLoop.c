//break statement using for loop
#include<stdio.h>
int main(){
	int i,inputOfNumbers,sum=0;
	for(i=0;i<5;i++){
		printf("Enter a number: ");
		scanf("%d",&inputOfNumbers);
		if(inputOfNumbers<0)
			break;
		sum=sum+inputOfNumbers;
	}
	printf("The sum of numbers: %d",sum);
}
