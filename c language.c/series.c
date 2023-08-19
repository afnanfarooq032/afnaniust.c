/*display series 
1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5 */
#include<stdio.h>
int main()
{
int i,n,j;
printf("Enter the no of times to repeat \n");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
i=1;

while(i<=5)
{
printf("%d ",i);
i++;
}
printf("\n");
}
}