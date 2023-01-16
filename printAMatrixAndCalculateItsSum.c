//program to print 2D array (Matrix) and calculate sum
#include<stdio.h>
int main(){
	int a[2][3],i,j;
	int sum=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the element of the matrix: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is\n ");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("The sum of matrix is %d ",sum);
}
