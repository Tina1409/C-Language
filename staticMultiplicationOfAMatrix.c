//MULTIPLICATION OF A 3X3 MATRIX WITH 3X2 MATRIX - static program
#include<stdio.h>
int main(){
	int A[3][3],B[3][2],C[3][2],i,j,k;
	int sum;
	printf("Enter elements of array1 [length=9]:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nEnter elements of array2 [length=6]:");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&B[i][j]);
		}
	}
	printf("\nMatrix A is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",A[i][j]);		
		}
		printf("\n");
	}
	printf("\nMatrix B is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",B[i][j]);		
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			sum=0;
			for(k=0;k<3;k++){ //k<3[no of columns is array1 or no of rows in array2
			sum=sum+A[i][k]*B[k][j];
			}
			C[i][j]=sum;
		}
	}
	printf("The resultant matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}	
}
