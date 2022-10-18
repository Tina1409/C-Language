//takes nothing returns nothing
#include<stdio.h>
int main(){
	void add(void); //function declaration
	add(); //function call
}


//any function of takes nothing nature have empty paranthesis  
//any function of return nothing nature uses void before its function name
void add(){  //function define 
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("The sum is %d",c);
}

