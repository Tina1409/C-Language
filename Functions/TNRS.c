//takes nothing returns something 
#include<stdio.h>
int main(){
	int s;
	s=add();
	printf("the sum is %d",s);
}

int add()
{
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return (c);
}
