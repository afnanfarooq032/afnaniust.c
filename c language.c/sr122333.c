//progamme to display series 1 2 2 3 3 3 4 4 4 4 ........
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("no of times to display \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
	}
}