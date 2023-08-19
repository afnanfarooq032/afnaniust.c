
//progamme to display series 2,4,16,256.....
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	i=2;
	j=1;
	printf("Enter the no of terms \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{n *=2;
	printf("%d ",n);
	}
	return 0;
}