//Akerman function
/*
  A(m,n)=n+1                if m=0
        =A(m-1,1)           if m>0 and n=0
        =A(m-1,A(m,n-1)     if m>0 and n>0; were m and n are positive integers
*/
#include<stdio.h>
int ack(int,int);
int main()
{
	int m,n;
	printf("Enter the value of m and n ");
	scanf("%d %d",&m,&n);
	printf("The answer is %d",ack(m,n));
	return 0;
}
int ack(int m,int n)
{
 if(m==0)
 return n+1;
  else if(m>0&&n==0)
 return	ack(m-1,1);
 else if (m>0&&n>0)
 return ack(m-1,ack(m,n-1));
}