//vowel or not using switch case method two
#include"stdio.h"
int main(){
	char a;
	printf("Enter a character value: ");
	scanf("%c",&a);
	switch(a){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("It is a vowel");
			break;
		default:
			printf("It is not a vowel");
	}
}
