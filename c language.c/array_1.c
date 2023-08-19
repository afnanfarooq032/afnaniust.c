//create an array and enter values in it and print it
#include<stdio.h>
int main()
{
	int a[5],n,i;//here it is decleration so it means size of array is 5
	printf("Enter the size of array ");
	scanf("%d",&n);
	printf("Enter the elements of  integer array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
}
}