//takes something returns something 
#include<stdio.h>
int main(){
	int s,x,y;
	int add(int,int); //function declaration
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	s=add(x,y);
	printf("the sum is %d",s);
}

int add(int a,int b)
{
	int c;
	c=a+b;
	return (c);
}
