#include<stdio.h>
int main(){
	
	int x=3,y;
	y=++x; 
	printf("%d %d",x,y); 

/* Priority: pre increment>assignemnt
   So,
   First we pre increment value of x by 1
                   x=4
   Now we assign value of x in y:
                   y=4

*/
}
