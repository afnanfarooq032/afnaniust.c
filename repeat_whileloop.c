//progamme to display 1 2 3 4 5 1 2 3 4 5 ...
#include<stdio.h>
int main ()
{
	int n,i,j;
	j=i;
	printf("Enter the value of n \n");
	scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    i=1;
    while(i<=5)
    {
    printf("%d ",i);
    i++;
	}}
}