//break statement using do while loop
#include<stdio.h>
int main(){
	int i,inputOfNumbers,sum=0;
	do{
		printf("Enter a number: ");
		scanf("%d",&inputOfNumbers);
		if(inputOfNumbers<0)
			break;
		sum+=inputOfNumbers;
	}while(1);
	printf("The sum of numbers: %d",sum);
}
