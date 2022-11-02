//average of 10 numbers
#include<stdio.h>
int main(){
	int a[10],i,sum=0;  // [] are to make an array 
	float avg; 
	
	printf("Enter 10 numbers: ");
	
	for(i=1;i<=9;i++){
		scanf("%d",&a[i]); //so that it can take input of 10 numbers
	}
	
	for(i=1;i<=9;i++){
		sum=sum+a[i];  //[i] represent the index number
	}
	
	avg=sum/10.0;
	printf("%f",avg);
}
