//continue statement using for loop
#include<stdio.h>
int main(){
	int i,inputOfNumbers,sum=0;
	for(i=1;i<=5;i++){
		printf("Enter a number: ");
		scanf("%d",&inputOfNumbers);
		if(inputOfNumbers<0){
			printf("Please enter a positive number\n");
			continue;
		}
		sum+=inputOfNumbers;
	}
	printf("The sum of numbers: %d",sum);
}
