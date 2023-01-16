//count of even and odd in a number
#include<stdio.h>
int main(){
	int a[10],i;
	int even=0,odd=0;
	for(i=0;i<10;i++){
		printf("Enter the number: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("The count of even is: %d\n",even);
	printf("The count of odd is: %d",odd);
}
