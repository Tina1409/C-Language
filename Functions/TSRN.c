//takes something returns nothing
#include<stdio.h>
int main(){
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	void add(int,int);
	add(x,y); //actual arguments :call by value	
}

void add(int a,int b) //formal arguments
{
	int c;
	c=a+b;
	printf("Sum is %d",c);
}

