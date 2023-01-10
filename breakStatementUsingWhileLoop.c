//break statement using for loop
#include<stdio.h>
int main(){
	int i,inputOfNumbers,sum=0;
	while(1){
		printf("Enter a number: ");
		scanf("%d",&inputOfNumbers);
		if(inputOfNumbers<0)
			break;
		sum+=inputOfNumbers;
	}
	printf("The sum of numbers: %d",sum);
}
