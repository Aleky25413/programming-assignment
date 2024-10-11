//program to print compound
/*
Name:ALEXANDER MUTHIANI KITHUNGA
Reg:PA107\G\22514\24
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float principal,rate ,time;
	double amount ;
	
	printf("enter princple=");
	scanf("%f",&principal);
	printf("enter rate=");
	scanf("%f",&rate);
	printf("enter time=");
	scanf("%f",&time);
	
	amount=principal*pow((1+rate/100),time);
	printf("amount is:%.2lf",amount);
	
	return 0;
}
