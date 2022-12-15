//int *y
//for storing address of x in a variable 
//we need to tell the compiler the this variable is toring an address so we use 
//int *y 
//for storing and address
#include<stdio.h>
main(){
	int x=5,*y;  
	printf("The value of x is %d\n",x);
	y=&x;
	printf("The value returned from address of: %d",*y);
}

