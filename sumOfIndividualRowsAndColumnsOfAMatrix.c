//SUM OF INDIVIDUAL ROWS AND COLUMNS OF A MATRIX
#include<Stdio.h>
int main(){
	int A[3][3],i,j;
	int sumOfRow,sumOfColumn;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter the elements of the array ");
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<3;i++){
		sumOfRow=sumOfColumn=0;
		for(j=0;j<3;j++){
			
			sumOfRow=sumOfRow+A[i][j];
			sumOfColumn=sumOfColumn+A[j][i];
			
		}
		printf("The sum of %d row is: %d\n",i,sumOfRow);
		printf("The sum of %d column is: %d\n",j,sumOfColumn);
	}
}
