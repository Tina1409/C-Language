//indirection operator
#include<stdio.h>
main(){
	int x=5,y;
	printf("The value of x is %d\n",x);
	y=*&x;
	printf("The value returned from address of %d is: %d",&x,y);
}
