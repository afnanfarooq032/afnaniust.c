///swapping the values using 3rd variable
#include<stdio.h>
int main() 
{
	int x,y,z;
	x=9;
	y=4;
	printf("The values are %d and %d \n",x,y);
	z=x;
	x=y;
	y=z;
	printf("The values are %d and %d",x,y);
	return 0;	
}