// progamme for comparision of two numbers//
#include<stdio.h>
int main()
{
	int a,b;
	printf("Please enter the two numbers\n");
	scanf("%d%d",&a,&b);
if(a>b)
	printf("The value of %d is greater than %d",a,b);
if (a<b)
	printf("The value of %d is greater than %d",b,a);
if(a==b)
	printf("Both are equal",a,b);
	getche();
	return 0;
//coded by Afnan
}