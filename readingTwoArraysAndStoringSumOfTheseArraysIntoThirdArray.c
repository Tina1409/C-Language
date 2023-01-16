//reading two arrays and storing their sum in third array
#include"stdio.h"
int main(){
	int array1[5],array2[5],sumArray[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter elements of array1: ");
		scanf("%d",&array1[i]);
	}
	for(i=0;i<5;i++){
		printf("Enter elements of array2: ");
		scanf("%d",&array2[i]);
	}
	for(i=0;i<5;i++){
		sumArray[i]=array1[i]+array2[i];
		printf("The sum of element of index at index %d is: %d\n ",i,sumArray[i]);
	}
}
