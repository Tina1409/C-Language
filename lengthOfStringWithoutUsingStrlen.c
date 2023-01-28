//Lenth of a string without using strlen function
#include<stdio.h>
#include<string.h>
int main(){
	int count=0,i;
	char name[30];
	printf("Enter the name: ");
	gets(name);
	for(i=0;name[i]!='\0';i++){
		count++;
	}
	printf("%d",count);
}
