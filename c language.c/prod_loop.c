//progamme to find product of n natural nos
#include<stdio.h>
int main()
{
	int n,i,prod;
	prod=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	prod=prod*i;	
	}
	printf("%d",prod);
	return 0;
}