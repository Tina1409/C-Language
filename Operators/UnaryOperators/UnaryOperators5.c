// SIZE OF()
int main(){
//DATATYPE
/*
    int x;
	x = sizeof(int);
	printf("%d",x);
*/

//VARIABLE
/*
	int x,y;
	x=sizeof(y);
	printf("%d",x);
*/
	
//CONSTANT
	int x,y,z;
	x=sizeof(34);
	y=sizeof(3.24); //real constant are by default of size double
	z=sizeof('a');
	printf("%d\n%d\n%d",x,y,z);
}
