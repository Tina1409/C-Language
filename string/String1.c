//gets(s)
#include <stdio.h>
int main(){
	char s[20];
	int i;
	printf("Enter your name: ");
//	scanf("%s",s); //s represent the address of full array
	gets(s);  //gets(s) is used in place of scanf due to delimetre
	puts(&s[0]); 
		
//but if we want to we can also write &s[0]...s=&s[0]
	
}
