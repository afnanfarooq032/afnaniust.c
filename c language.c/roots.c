//progamme for quadratic equations.
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
double a,b,c,disc,root1,root2,root3;
printf("Please enter the value of a\n");
scanf("%lf",&a);
printf("Please enter the value of b\n");
scanf("%lf",&b);
printf("Please enter the value of c\n");
scanf("%lf",&c);
disc=pow(b,2)-4*a*c;
if (disc>0)
{
root1=(-b+sqrt(disc))/2*a;
root2=(-b-sqrt(disc))/2*a;
printf("The roots of given equation is %lf and %lf",root1,root2);
}
if(disc==0)
{

root3=-b/2*a;
printf("The D=0 so,root is equal to %lf",root3);
}
if(disc<0)
printf("The roots of given equation are imaginary");
getche();
//coded by Afnan
return 0;		
}
	
	
	
	
	