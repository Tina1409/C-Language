//TRANSPOSE OF A MATRIX
#include<stdio.h>
int main(){
	int a[2][3],i,j;
	int sum=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the elements of the matrix: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[j][i]);
			
		}
		printf("\n");
	}
	
	
}
