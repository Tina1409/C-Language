//concat using strcat function
#include<stdio.h>
#include<string.h>
int main(){
	char fname[30],lname[30];
	printf("Enter first name: ");
	gets(fname);
	printf("Enter last name: ");
	gets(lname);
	strcat(fname,lname);
	printf("%s",fname);
}
