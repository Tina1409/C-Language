#include"stdio.h"
int main(){
	int A[5],i;
	//FOR READING THE ELEMENTS OF THE ARRAY
	for(i=0;i<5;i++){
		printf("Enter the elements of array [length=5]: ");
		scanf("%d\n",&A[i]);
	}
	//FOR WRITING THE ELEMENTS OF ARRAY
	for(i=0;i<5;i++){
		printf("%d\n",A[i]);
	}
	//FOR WRITING THE ELEMENTD OF ARRAY IN REVERSE ORDER
	for(i=4;i>=0;i--){
		printf("%d\n",A[i]);
	}
}
