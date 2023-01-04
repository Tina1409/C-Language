//output unformatted function in c-getchar()
#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character: ");
	ch=getchar();
	//printf("The character is: %c",ch);
	putchar(ch);
}
