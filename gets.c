//input formatted function gets() - for string
#include<stdio.h>
int main(){
	char ch[10];
	gets(ch);  //takes a string input
	printf("ch= %s",ch);
	printf("\nch= %d",&ch); 
	printf("\nch= %d",ch); //returns the address of ch variable
}
