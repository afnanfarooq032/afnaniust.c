//To check the positive and negative
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int x;
printf("Please Enter the number \n",x);
scanf("%d",&x);
if(x>0)
printf("The entered number is positive");
if(x<0)
printf("The entered number is negative");
if(x==0)
printf("%d is neather positive nor negative",x);
getche();//for screen nedeed only in turbo c compiler not in dev c++
return 0;
//coded by Afnan
}