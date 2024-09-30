#include<stdio.h>
#include<math.h>include 
int main()
{
double a,b ,c,disc ,x1,x2,r,i;

printf("enter the coefficient of a,b,c:",a,b,c);
scanf("%lf,%lf,%lf",&a,&b,&c);

disc=b*b-4*a*c;

if (disc>0);
	
{
x1=(-b-sqrt(disc)) /(2*a);
x2=(-b+sqrt(disc)) /(2*a);
printf("x1=%.2lf&&x2=%.2lf",x1,x2);	
}
else if (disc==0);
{
x1=x2=-b/(2*a);
	printf("x1=x2%.2lf",x1);
}
else
{
	r=-b/(2*a);
	i=sqrt(-disc)/(2*a);

x1=r-i;
x2=r+i;
printf("x1=%.2lf&&x2=%.2lf",x1,x2);
}
return 0;
	

	
}