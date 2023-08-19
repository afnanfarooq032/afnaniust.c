/*Display star series
* * * * *
* * * * *
* * * * *
* * * * *   */
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the no of times series to repeat \n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
	for(i=1;i<=5;i++)
	{
	printf("* ");
}
	printf("\n");
}
}


