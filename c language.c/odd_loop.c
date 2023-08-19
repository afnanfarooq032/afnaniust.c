//progamme to add odd n natural nos
#include<stdio.h>
int main()
{
	int n,i,sum;
	sum=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
	sum=sum+i;	
	}
	printf("%d",sum);
	return 0;
}