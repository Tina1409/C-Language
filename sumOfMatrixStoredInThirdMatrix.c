//SUM OF TWO MATRIX AND STORING THAT SUM IN THIRD MATRIX
#include"stdio.h"
int main(){
	int A[2][3],B[2][3],C[2][3],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the elements of array1: ");
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the elements of array2: ");
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			C[i][j]=A[i][j]+B[i][j];
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
