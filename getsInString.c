//GETS IN STRING
#include<stdio.h>
int main(){
	char name[30];
	printf("Enter name: ");
	gets(name); //GETS FUNCTION PRINTS THE WHOLE STATEMENT TILL ENTER IS NOT PRESSED
	printf("%s",name);
}
