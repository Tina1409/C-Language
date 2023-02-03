//PROGRAM FOR SMALLEST ELEMENT IN AN ARRAY
#include<stdio.h>
int main(){
	int arrayOfNumbers[5],i,smallestElement=999;
	for(i=0;i<5;i++){
		printf("Enter %d element of array: ",i);
		scanf("%d",&arrayOfNumbers[i]);
	}
	for(i=0;i<5;i++){
		if(arrayOfNumbers[i]<smallestElement){
			smallestElement=arrayOfNumbers[i];
		}
	}
	printf("%d",smallestElement);
	
	
}
