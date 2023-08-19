// progamme to display fibonache series
#include<stdio.h>
int main()
{
	int i,j,k,n,l;
	j=1;
	k=1;
	printf("No of times to display series \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d ",j);
	l=j+k;
	j=k;
	k=l;	
	}
	}