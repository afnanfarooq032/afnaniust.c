//write a progamme in c to add 2 nos using functions
#include<stdio.h>
int add(int,int);
int sub(int,int);
int pro(int,int);
int main()
{
	int a,b;
	int ans;
	printf("Enter the value of a and b \n");
	scanf("%d%d",&a,&b);
	ans=add(a,b);     //its call to function
	printf("sum is %d",ans);
	printf("\n");
	ans=sub(a,b);
	printf("sub is %d",ans);
	printf("\n");
	ans=pro(a,b);
	printf("The pro is %d",ans);
}
// Here i will make function to add 
int add(int a,int b)
{
	int z;
	z=a+b;
	return z;
}
int sub(int a,int b)
{
	int z;
	z=a-b;
	return z;
}
int pro(int a,int b)
{
	int z;
	z=a*b;
	return z;
}