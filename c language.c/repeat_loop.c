//progamme to display 1 2 3 4 5 1 2 3 4 5 ...Nesting of loop used
#include<stdio.h>
int main ()
{
	int n,i,j;
	j=i;
	printf("Enter the value of n \n");
	scanf("%d",&n);
    for(j=1;j<=n;j++)
	{
	for(i=1;i<=5;i++)
	printf("%d ",i);
	}


    
}