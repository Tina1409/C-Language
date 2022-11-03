//string - printing name
#include<stdio.h>
int main(){
	char s[10]={'T','i','n','a','\0'};
	int i;
	for(i=0;i<=5;i++){
		printf("%c",s[i]);	//careful with using %c
	}
}
