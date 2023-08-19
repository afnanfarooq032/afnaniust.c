
//progamme to display series 2 4 8 16.....
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	j=1;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++);
	{
	for(i=2;i<=pow(2,n);i=i*2)
	printf("%d ",i);
	}
	
	return 0;
}