//table of a number 
#include<stdio.h>
int main(){
	int i,tableOfNumber,endingPoint;
	printf("Enter the number you want the table of: ");
	scanf("%d",&tableOfNumber);
	printf("Enter the limit: ");
	scanf("%d",&endingPoint);
	for(i=1;i<=endingPoint;i++){
		printf("%d X %d = %d\n",tableOfNumber,i,(tableOfNumber*i));
	}
}
