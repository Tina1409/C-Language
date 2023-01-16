//program to cal avg and sum of five students using array
#include"stdio.h"
int main(){
	int marks[5],i;
	int avg,sum=0;
	for(i=0;i<5;i++){
		printf("Enter your marks: ");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("The average of the marks is: %d\n",avg);
	printf("the sum of the marks is :%d",sum);
	
}
