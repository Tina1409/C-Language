//strlen FUNCTION IN STRINGS
#include<stdio.h>
#include<string.h>
int main(){
	int count=0;
	char name[30];
	printf("Enter a name: ");
	gets(name);
	count=strlen(name); //pass the parametre in strlen
	printf("The length of string is: %d",count);
}
