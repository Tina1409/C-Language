#include<stdio.h>
int main(){
	
	int x=3,y;
	y=x++; 
	printf("%d %d",x,y); 

/* Priority:assignemnt>post increment
   So,
   First we use assign y value of x: 
                       y=3
   Now the post increment operator which increse x by 1
                       x=4

*/
}
