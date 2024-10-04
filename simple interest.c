#include<stdio.h>
#include<math.h>
int main()
{
	float rate,principal,time,r,p,t;	
	double simpleinterest,si;	
	printf("enter rate =");
	scanf("%f",&r);
	printf("enter principal=");
	scanf("%f",&p);
	printf("enter time=");
	scanf("%f",t);
	
		si=(r*p*t)/100;
	printf("enter simpleinterest,si:%.2lf=");	
	return 0;
}